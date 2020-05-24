#include "controller.ih"

Controller::Controller()
:
    d_model(-3.0, 3.0)
{
    // XXX No Magic Numbers
    sf::VideoMode const mode{ 800, 450, 24 };
        //sf::VideoMode::getDesktopMode();

    // OpenGL settings
    sf::ContextSettings settings;
    settings.depthBits = 24;
    settings.stencilBits = 8;
    settings.antialiasingLevel = 0;
    settings.majorVersion = 2;
    settings.minorVersion = 1;

    d_window.create(mode, "Chaos Equations", sf::Style::Close, settings);
    d_window.setFramerateLimit(60);
    d_window.setVerticalSyncEnabled(true);
    d_window.setActive(false);
    d_window.requestFocus();
}

