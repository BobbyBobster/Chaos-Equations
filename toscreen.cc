#include "main.ih"

sf::Vector2f ToScreen(double x, double y) 
{
    float const s = plot_scale * float(window_h / 2);
    float const nx = float(window_w) * 0.5f + (float(x) - plot_x) * s;
    float const ny = float(window_h) * 0.5f + (float(y) - plot_y) * s;
    return sf::Vector2f(nx, ny);
}

