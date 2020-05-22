#include "main.ih"

std::string ParamsToString(const double* params) 
{
    const char base27[] = "_ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static_assert(num_params % 3 == 0, "Params must be a multiple of 3");
    int a = 0;
    int n = 0;
    std::string result;
    for (int i = 0; i < num_params; ++i) 
    {
        a = a*3 + int(params[i]) + 1;
        n += 1;
        if (n == 3) 
        {
            result += base27[a];
            a = 0;
            n = 0;
        }
    }
    std::cout << result << '\n';
    return result;
}

