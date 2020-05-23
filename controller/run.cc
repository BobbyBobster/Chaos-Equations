#include "controller.ih"

void Controller::run()
{
    while (true)
    {
        while (d_window.isOpen()) 
        {
            checkMenuInput();
        }
        //Flip the screen buffer
        d_window.display();
    }
}

            //Change simulation speed if using shift modifiers
            /*
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) 
                speed_mult = 0.1;
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)) 
                speed_mult = 10.0;
            else 
                speed_mult = 1.0;

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) 
                speed_mult = -speed_mult;

            //Skip all drawing if paused
            if (paused) 
            {
                d_window.display();
                continue;
            }

            //Automatic restart
            if (t > t_end) 
            {
                if (shuffle_equ) 
                {
                    ResetPlot();
                    RandParams(params);
                }
                GenerateNew(d_window, t, params);
            }

            sf::BlendMode fade(sf::BlendMode::One, sf::BlendMode::One, 
                    sf::BlendMode::ReverseSubtract);
            sf::RenderStates renderBlur(fade);

            sf::RectangleShape fullscreen_rect;
            fullscreen_rect.setPosition(0.0f, 0.0f);
            fullscreen_rect.setSize(sf::Vector2f(window_w, window_h));

            static sf::Uint8 const fade_speeds[] = { 10,2,0,255 };
            sf::Uint8 const fade_speed = fade_speeds[trail_type];
            if (fade_speed >= 1) 
            {
                fullscreen_rect.setFillColor(
                        sf::Color(fade_speed, fade_speed, fade_speed, 0));
                d_window.draw(fullscreen_rect, renderBlur);
            }

            //Smooth out the stepping speed.
            int const steps = steps_per_frame;
            double const delta = delta_per_step * speed_mult;
            rolling_delta = rolling_delta*0.99 + delta*0.01;
            */
            /*
            //Apply chaos
            for (int step = 0; step < steps; ++step) 
            {
                bool isOffScreen = true;
                double x = t;
                double y = t;

                for (int iter = 0; iter < iters; ++iter) 
                {
                    double const xx = x * x;
                    double const yy = y * y;
                    double const tt = t * t;
                    double const xy = x * y;
                    double const xt = x * t;
                    double const yt = y * t;
                    double const nx = xx*params[0] + yy*params[1] 
                        + tt*params[2] + xy*params[3] + xt*params[4] 
                        + yt*params[5] + x*params[6] + y*params[7] 
                        + t*params[8];
                    double const ny = xx*params[9] + yy*params[10] 
                        + tt*params[11] + xy*params[12] + xt*params[13] 
                        + yt*params[14] + x*params[15] + y*params[16] 
                        + t*params[17];
                    x = nx;
                    y = ny;
                    sf::Vector2f screenPt = ToScreen(x, y);
                    if (iteration_limit && iter < 100) 
                    {
                        screenPt.x = FLT_MAX;
                        screenPt.y = FLT_MAX;
                    }
                    vertex_array[step*iters + iter].position = screenPt;

                    //Check if dynamic delta should be adjusted
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
                }

                //Update the t variable
                if (isOffScreen) 
                    t += 0.01;
                else
                    t += rolling_delta;
            }
            */

            /*
            //Draw new points
            //static const float dot_sizes[] = { 1.0f, 3.0f, 10.0f };
            //glEnable(GL_POINT_SMOOTH);
            //glPointSize(dot_sizes[dot_type]);
            d_window.draw(vertex_array.data(), 
                    vertex_array.size(), sf::PrimitiveType::Points);

            //Draw the equation
            d_window.draw(equ_box);
            d_window.draw(equ_text);

            //Draw the current t-value
            MakeTText(t);
            d_window.draw(t_box);
            d_window.draw(t_text);
            */

        /*
        if (load_started) 
        {
            std::string code;
            std::cout << "Enter 6 letter code:" << '\n';
            std::cin >> code;
            CreateRenderWindow(d_window);
            ResetPlot();
            StringToParams(code, params);
            GenerateNew(d_window, t, params);
            load_started = false;
        } 
        */
