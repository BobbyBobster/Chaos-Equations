#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

class Controller 
{
    sf::Window &d_window;
    
    public:
        Controller(sf::Window window);

        void run(); // main loop
};

#endif
