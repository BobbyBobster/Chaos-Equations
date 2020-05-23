#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

class Controller 
{
    sf::Window d_window;

    
    public:
        Controller(); // creates a window

        void run(); // main loop

        void checkMenuInput(); // events for keypresses
};

#endif
