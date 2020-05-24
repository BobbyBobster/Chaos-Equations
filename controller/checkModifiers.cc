#include "controller.ih"

void Controller::checkModifiers()
{
    // Change simulation speed if using shift modifiers
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) 
        d_multiplier = 0.1;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)) 
        d_multiplier = 10.0;
    else 
        d_multiplier = 1.0;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) 
        d_multiplier = -d_multiplier;
}

