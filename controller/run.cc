#include "controller.ih"
        // XXX THIS SHOULD NOT BE HERE!
sf::Vector2f Controller::ToScreen(double x, double y) 
{
    
int window_w = 800;
int window_h = 450;
float plot_scale = 0.25f;
float plot_x = 0.0f;
float plot_y = 0.0f;

    float const s = plot_scale * float(window_h / 2);
    float const nx = float(window_w) * 0.5f + (float(x) - plot_x) * s;
    float const ny = float(window_h) * 0.5f + (float(y) - plot_y) * s;
    return sf::Vector2f(nx, ny);
}

void Controller::run()
{
    while (true)
    {
        while (d_window.isOpen()) 
        {
            checkMenuInput();
            checkModifiers();

            // Skip all drawing if paused
            if (d_paused) 
            {
                d_window.display();
                continue;
            }

            // XXX (from here) Why do we need this?
            sf::BlendMode fade(sf::BlendMode::One, sf::BlendMode::One, sf::BlendMode::ReverseSubtract);
            sf::RenderStates renderBlur(fade); 

            sf::RectangleShape fullscreen_rect;
            fullscreen_rect.setPosition(0.0f, 0.0f);
            fullscreen_rect.setSize(sf::Vector2f(800, 450));

            static const sf::Uint8 fade_speeds[] = { 10,2,0,255 };
            const sf::Uint8 fade_speed = fade_speeds[0];
            if (fade_speed >= 1) 
            {
                fullscreen_rect.setFillColor(sf::Color(fade_speed, fade_speed, fade_speed, 0));
                d_window.draw(fullscreen_rect, renderBlur);
            }
            // XXX (until here)


            sf::VertexArray pointsToDraw = d_model.update();
            // XXX Weird way to do this!
            for (size_t idx = 0, size = pointsToDraw.getVertexCount(); 
                    idx != size; ++idx)
            {
                pointsToDraw[idx] = 
                    ToScreen(pointsToDraw[idx].position.x, pointsToDraw[idx].position.y);
            }

            d_window.draw(pointsToDraw);

            d_window.display();
        }
    }
}

            /*
    //Simulation variables
  double t = t_start;
  std::vector<sf::Vector2f> history(iters);
  double rolling_delta = delta_per_step;
  double params[num_params];
  double speed_mult = 1.0;
  bool paused = false;
  int trail_type = 0;
  int dot_type = 0;
  bool load_started = false;
  bool shuffle_equ = true;
  bool iteration_limit = false;

  //Setup the vertex array
  std::vector<sf::Vertex> vertex_array(iters*steps_per_frame);
  for (size_t i = 0; i < vertex_array.size(); ++i) {
    vertex_array[i].color = GetRandColor(i % iters);
  }

  //Initialize random parameters
  ResetPlot();
  RandParams(params);
  GenerateNew(window, t, params);


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
