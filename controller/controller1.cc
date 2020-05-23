#include "controller.ih"

Controller::Controller()
{
    sf::VideoMode const mode = sf::VideoMode::getDesktopMode();

    sf::ContextSettings settings;
    settings.depthBits = 24;
    settings.stencilBits = 8;
    settings.antialiasingLevel = 0;
    settings.majorVersion = 2;
    settings.minorVersion = 1;

    d_window.create(mode, "Chaos Equations", sf::Style::Default, settings);
}

