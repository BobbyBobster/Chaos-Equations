#include "main.ih"

#define SIGN_OR_SKIP(i, x) \
    if (params[i] != 0.0) { \
        if (isFirst) { \
            if (params[i] == -1.0) ss << "-"; \
        } else { \
            if (params[i] == -1.0) ss << " - "; \
            else ss << " + "; \
        } \
        ss << x; \
        isFirst = false; \
    } 
std::string MakeEquationStr(double* params) 
{
    std::stringstream ss;
    bool isFirst = true;
    SIGN_OR_SKIP(0, "x\u00b2");
    SIGN_OR_SKIP(1, "y\u00b2");
    SIGN_OR_SKIP(2, "t\u00b2");
    SIGN_OR_SKIP(3, "xy");
    SIGN_OR_SKIP(4, "xt");
    SIGN_OR_SKIP(5, "yt");
    SIGN_OR_SKIP(6, "x");
    SIGN_OR_SKIP(7, "y");
    SIGN_OR_SKIP(8, "t");
    return ss.str();
}

