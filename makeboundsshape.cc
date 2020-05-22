#include "main.ih"

sf::RectangleShape MakeBoundsShape(const sf::Text& text) 
{
    sf::RectangleShape blackBox;
    const sf::FloatRect textBounds = text.getGlobalBounds();
    blackBox.setPosition(textBounds.left, textBounds.top);
    blackBox.setSize(sf::Vector2f(textBounds.width, textBounds.height));
    blackBox.setFillColor(sf::Color::Black);
    return blackBox;
}

