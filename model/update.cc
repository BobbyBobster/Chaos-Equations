#include "model.ih"

sf::VertexArray const &Model::update()
{
    double &t = d_time; // TODO: refactor all t variables in this function
    for (size_t step = 0; step != d_stepsPerFrame; ++step)
    {
        bool isOffScreen = true;
        double x = t;
        double y = t;
        
        for (size_t idx = 0; idx != d_iterations; ++idx)
        {
            double const xx = x * x;
            double const yy = y * y;
            double const tt = t * t;
            double const xy = x * y;
            double const xt = x * t;
            double const yt = y * t;

            // TODO: Inner product function?
            double const nx = xx*d_params[0] + yy*d_params[1] 
                + tt*d_params[2] + xy*d_params[3] + xt*d_params[4] 
                + yt*d_params[5] + x*d_params[6] + y*d_params[7] 
                + t*d_params[8];
            double const ny = xx*d_params[9] + yy*d_params[10] 
                + tt*d_params[11] + xy*d_params[12] + xt*d_params[13] 
                + yt*d_params[14] + x*d_params[15] + y*d_params[16] 
                + t*d_params[17];
            x = nx;
            y = ny;
            //sf::Vector2f screenPt = ToScreen(x, y);
            /*
            if (iteration_limit && iter < 100) 
            {
                screenPt.x = FLT_MAX;
                screenPt.y = FLT_MAX;
            }
            vertex_array[step*iters + iter].position = screenPt;
            */

            sf::Vector2f point{ x, y };
            d_vertexArray[step * idx + idx].position = point;

            //Check if dynamic delta should be adjusted
            /*
            if (screenPt.x > 0.0f && screenPt.y > 0.0f && 
                    screenPt.x < window_w && screenPt.y < window_h) 
            {
                float const dx = history[iter].x - float(x);
                float const dy = history[iter].y - float(y);
                double const dist = 
                    double(500.0f * std::sqrt(dx*dx + dy*dy));
                rolling_delta = std::min(rolling_delta, 
                        std::max(delta / (dist + 1e-5), 
                            delta_minimum*speed_mult));
                isOffScreen = false;
            }
            history[iter].x = float(x);
            history[iter].y = float(y);
            */
        }

        // Update time
        t += 0.01;
        /*
        if (isOffScreen) 
            t += 0.01;
        else
            t += rolling_delta;
        */
    }

    return d_vertexArray;
}

