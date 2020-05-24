#include "controller.ih"

void Controller::checkMenuInput()
{
    sf::Event event;
    while (d_window.pollEvent(event)) 
    {
        if (event.type == sf::Event::Closed) 
        {
            d_window.close();
            break;
        } 
        else if (event.type == sf::Event::KeyPressed) 
            switch (sf::Keyboard::Key const keycode = event.key.code)
            {
                case sf::Keyboard::Escape:
                    d_window.close();
                    break;
                case sf::Keyboard::A:
                    // shuffle_equ = true;
                    break;
                case sf::Keyboard::C:
                    // CenterPlot(history);
                    break;
                case sf::Keyboard::D:
                    // dot_type = (dot_type + 1) % 3;
                    break;
                case sf::Keyboard::I:
                    // iteration_limit = !iteration_limit;
                    break;
                case sf::Keyboard::L:
                    // shuffle_equ = false;
                    // load_started = true;
                    // paused = false;
                    d_window.close();
                    break;
                case sf::Keyboard::N:
                    // ResetPlot();
                    // RandParams(params);
                    // GenerateNew(d_window, t, params);
                    break;
                case sf::Keyboard::P:
                    // paused = !paused;
                    break;
                case sf::Keyboard::R:
                    // shuffle_equ = false;
                    break;
                case sf::Keyboard::S:
                {
                    //std::ofstream fout{ "saved.txt", std::ios::app };
                    // fout << equ_code << '\n';
                    // std::cout << "Saved: " << equ_code << '\n';
                    std::cout << "pressed S\n";
                    break;
                }
                case sf::Keyboard::T:
                    // trail_type = (trail_type + 1) % 4;
                    break;
            }
    }
}
