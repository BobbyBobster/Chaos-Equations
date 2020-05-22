#include "main.ih"

sf::Vector2f ToScreen(double x, double y) 
{
    const float s = plot_scale * float(window_h / 2);
    const float nx = float(window_w) * 0.5f + (float(x) - plot_x) * s;
    const float ny = float(window_h) * 0.5f + (float(y) - plot_y) * s;
    return sf::Vector2f(nx, ny);
}

