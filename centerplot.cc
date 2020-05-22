#include "main.ih"

void CenterPlot(const std::vector<sf::Vector2f>& history) 
{
    float min_x = FLT_MAX;
    float max_x = -FLT_MAX;
    float min_y = FLT_MAX;
    float max_y = -FLT_MAX;
    for (size_t i = 0; i < history.size(); ++i) 
    {
        min_x = std::fmin(min_x, history[i].x);
        max_x = std::fmax(max_x, history[i].x);
        min_y = std::fmin(min_y, history[i].y);
        max_y = std::fmax(max_y, history[i].y);
    }
    max_x = std::fmin(max_x, 4.0f);
    max_y = std::fmin(max_y, 4.0f);
    min_x = std::fmax(min_x, -4.0f);
    min_y = std::fmax(min_y, -4.0f);
    plot_x = (max_x + min_x) * 0.5f;
    plot_y = (max_y + min_y) * 0.5f;
    plot_scale = 1.0f / std::max(
            std::max(max_x - min_x, max_y - min_y) * 0.6f, 0.1f);
}

