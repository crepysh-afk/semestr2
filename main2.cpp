#include <iostream>
#include <vector>
#include "Slope.h"

int main()
{
    try
    {
        Piquet p1(10, 25.5);
        Piquet p2(12, 40.2);

        Slope slope(12.5, p1, p2);

        std::vector<Restriction*> restrictions;
        restrictions.push_back(&slope);

        for (const auto r : restrictions)
            std::cout << r->ToString() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}