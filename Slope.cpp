#include "Slope.h"
#include <sstream>
#include <stdexcept>

Slope::Slope(const double value, const Piquet& start, const Piquet& end)
    : value(value), start(start), end(end)
{
    if (value > 50)
        throw std::invalid_argument("Slope value cannot exceed 50‰.");

    if (end < start)
        throw std::invalid_argument("End piquet must be greater than start.");
}

std::string Slope::ToString() const
{
    std::ostringstream ss;
    ss << "Slope: " << value << "‰, from "
        << start.ToString() << " to "
        << end.ToString();
    return ss.str();
}

Slope Slope::Read(std::istream& is)
{
    double value;
    Piquet start(0, 0), end(0, 0);

    is >> value >> start >> end;
    return Slope(value, start, end);
}

std::ostream& operator<<(std::ostream& os, const Slope& s)
{
    os << s.ToString();
    return os;
}
