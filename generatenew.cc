#include "main.ih"

void GenerateNew(sf::RenderWindow& window, double& t, double* params) 
{
    t = t_start;
    equ_code = ParamsToString(params);
    const std::string equation_str =
        "x' = " + MakeEquationStr(params) + "\n"
        "y' = " + MakeEquationStr(params + num_params / 2) + "\n"
        "Code: " + equ_code;
    equ_text.setCharacterSize(30);
    equ_text.setFont(font);
    equ_text.setString(equation_str);
    equ_text.setFillColor(sf::Color::White);
    equ_text.setPosition(10.0f, 10.0f);
    equ_box = MakeBoundsShape(equ_text);
    window.clear();
}
