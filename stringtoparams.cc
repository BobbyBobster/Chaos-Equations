#include "main.ih"

void StringToParams(const std::string& str, double* params) 
{
    // TODO STYLE: use != instead of <
    for (size_t idx = 0; idx < num_params/3; ++idx) 
    {
        int a = 0;
        char const c = idx < str.length() ? str[idx] : '_';
        if (c >= 'A' && c <= 'Z') 
            a = int(c - 'A') + 1;
        else if (c >= 'a' && c <= 'z') 
            a = int(c - 'a') + 1;
        params[idx*3 + 2] = double(a % 3) - 1.0;
        a /= 3;
        params[idx*3 + 1] = double(a % 3) - 1.0;
        a /= 3;
        params[idx*3 + 0] = double(a % 3) - 1.0;
    }
}

