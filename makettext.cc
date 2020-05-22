#include "main.ih"

void MakeTText(double t) 
{
    t_text.setCharacterSize(30);
    t_text.setFont(font);
    t_text.setString("t = " + std::to_string(t));
    t_text.setFillColor(sf::Color::White);
    t_text.setPosition(window_w - 200.0f, 10.0f);
    t_box = MakeBoundsShape(t_text);
}

