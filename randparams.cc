#include "main.ih"

void RandParams(double* params) 
{
    std::uniform_int_distribution<int> rand_int(0, 3);
    for (size_t idx = 0; idx != num_params; ++idx) 
    {
        int const rand = rand_int(rand_gen);
        if (rand == 0) 
            params[idx] = 1.0f;
        else if (rand == 1) 
            params[idx] = -1.0f;
        else 
            params[idx] = 0.0f;
    }
}

