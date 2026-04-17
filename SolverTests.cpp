#include "Slope.h"
#include <cassert>

void TestSlope()
{
    Piquet p1(1, 0);
    Piquet p2(2, 0);

    Slope s(25, p1, p2);

    assert(s.ToString().length() > 0);
}