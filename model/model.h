#ifndef MODEL_H_
#define MODEL_H_

#include <SFML/Graphics.hpp>

class Model // Chaos Eqs model
{
    size_t const d_iterations = 500;    // XXX No Magic Numbers
    size_t const d_stepsPerFrame = 300;

    double d_timeinterval[2];
    double d_time; // XXX Necessary to have time as data member? Isnt it only used in update()
    sf::VertexArray d_vertexArray;

    double d_params[18];

    public:
        Model();
        Model(double timestart, double timeend);

        sf::VertexArray const &update();

    private:

};

#endif

