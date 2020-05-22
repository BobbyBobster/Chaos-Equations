#include "main.ih"

namespace
{
    std::string const opening = 
R"(
=========================================================

     Chaos Equations by HackerPoet and BobbyBobster

    These are plots of random recursive equations, which
often produce chaos, and results in beautiful patterns.
For every time t, a point (x,y) is initialized to (t,t).
The equation is applied to the point many times, and each
iteration is drawn in a unique color.

=========================================================
)";

    std::string const options = 
R"(
Controls:
      'A' - Automatic Mode (randomize equations)
      'R' - Repeat Mode (keep same equation)

      'C' - Center points
      'D' - Dot size Toggle
      'I' - Iteration Limit Toggle
      'T' - Trail Toggle

      'P' - Pause
 'LShift' - Slow Down
 'RShift' - Speed Up
  'Space' - Reverse

      'N' - New Equation (random)
      'L' - Load Equation
      'S' - Save Equation
)";
}

void usage()
{
    std::cout << opening << options;
}

