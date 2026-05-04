#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс Пикет.
 */
class Piquet
{
private:
    int number;          ///< Номер пикета
    double shift;        ///< Смещение
    bool isStandard;     ///< Стандартный ли пикет

public:
    Piquet(const int number,const double shift,const bool isStandard = true);

    std::string ToString() const;

    friend std::ostream& operator<<(std::ostream& os, const Piquet& p);
    friend std::istream& operator>>(std::istream& is, Piquet& p);

    bool operator<(const Piquet& other) const;
    bool operator==(const Piquet& other) const;
};
