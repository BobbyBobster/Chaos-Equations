#include "model.ih"

Model::Model(double timestart, double timeend)
:
    d_timeinterval{ timestart, timeend},
    d_time(timestart),
    d_vertexArray(sf::PrimitiveType::Points, d_iterations * d_stepsPerFrame),
    d_params{ 0, 1, 0, 0, 1, 0, 0, 1, 0, -1, 1, 0 -1, 1, 0, 0, 0, 0 }
{}

