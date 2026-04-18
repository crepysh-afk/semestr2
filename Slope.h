#pragma once
#include "Restriction.h"
#include "Piquet.h"

/**
 * @brief Класс Уклон.
 *
 * Хранит значение уклона (в промилях),
 * начало и конец уклона в пикетах.
 */
class Slope : public Restriction
{
private:
    double value;   ///< Значение уклона (не более 50)
    Piquet start;   ///< Начало уклона
    Piquet end;     ///< Конец уклона

public:

    /**
     * @brief Конструктор класса Slope.
     * @param value Значение уклона (<= 50)
     * @param start Начало уклона
     * @param end Конец уклона
     */
    Slope(double value, const Piquet& start, const Piquet& end);

    std::string ToString() const override;

    static Slope Read(std::istream& is);

    friend std::ostream& operator<<(std::ostream& os, const Slope& s);
};
