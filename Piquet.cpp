#include "Piquet.h"
#include <sstream>
#include <stdexcept>

Piquet::Piquet(int number, double shift, bool isStandard)
    : number(number), shift(shift), isStandard(isStandard)
{
    if (shift < 0)
        throw std::invalid_argument("Shift cannot be negative.");
}

std::string Piquet::ToString() const
{
    std::ostringstream ss;
    ss << "ой " << number << "+" << shift;
    return ss.str();
}

std::ostream& operator<<(std::ostream& os, const Piquet& p)
{
    os << p.ToString();
    return os;
}

std::istream& operator>>(std::istream& is, Piquet& p)
{
    is >> p.number >> p.shift;
    return is;
}

bool Piquet::operator<(const Piquet& other) const
{
    return number < other.number ||
        (number == other.number && shift < other.shift);
}

bool Piquet::operator==(const Piquet& other) const
{
    return number == other.number && shift == other.shift;
}