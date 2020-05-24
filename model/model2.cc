#include "model.ih"

Model::Model(double timestart, double timeend)
:
    d_timeinterval{ timestart, timeend},
    d_time(timestart),
    d_vertexArray(sf::PrimitiveType::Points, d_iterations * d_stepsPerFrame)
{}

