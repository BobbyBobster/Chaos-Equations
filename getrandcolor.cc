#include "main.ih"

sf::Color GetRandColor(int i) 
{
    i += 1;
    int r = std::min(255, 50 + (i * 11909) % 256);
    int g = std::min(255, 50 + (i * 52973) % 256);
    int b = std::min(255, 50 + (i * 44111) % 256);
    return sf::Color(r, g, b, 16);
}

