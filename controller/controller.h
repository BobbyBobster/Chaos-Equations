#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <SFML/Graphics.hpp>
#include "../model/model.h"

class Controller 
{
    sf::RenderWindow d_window;
    Model d_model;

    float d_multiplier = 1.0;
    bool d_paused = false;
    
    public:
        Controller(); // creates a window
        Controller(Model model); // TODO

        void run(); // main loop

        
        // XXX REMOVE THIS
sf::Vector2f ToScreen(double x, double y) ;

    private:
        void draw();

        void checkMenuInput(); // events for keypresses
        void checkModifiers();
};

#endif

