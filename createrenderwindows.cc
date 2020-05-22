#include "main.ih"

void CreateRenderWindow(sf::RenderWindow& window) 
{
    //GL settings
    sf::ContextSettings settings;
    settings.depthBits = 24;
    settings.stencilBits = 8;
    settings.antialiasingLevel = 0;
    settings.majorVersion = 2;
    settings.minorVersion = 1;

    //Create the window
    const sf::VideoMode screenSize(window_w, window_h, window_bits);
    window.create(screenSize, "Chaos Equations", 
            (fullscreen ? sf::Style::Fullscreen : sf::Style::Close), settings);
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);
    window.setActive(false);
    window.requestFocus();
}

