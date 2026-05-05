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
/**
*@brief value - значение уклона
*/
    double value;
/**
*@brief start - начало уклона
*/
    Piquet start;
/**
*@brief end - конец уклона
*/
    Piquet end;  

public:

    /**
     * @brief Конструктор класса Slope.
     * @param value Значение уклона (<= 50)
     * @param start Начало уклона
     * @param end Конец уклона
     */
    Slope(const double value, const Piquet& start, const Piquet& end);

/**
*@brief Преобразует уклон в строку
*@return Строковое описание уклона
*/
    std::string ToString() const override;
/**
*@brief Статический метод чтения объекта из потока
*@param is Поток ввода
*@return созданный объект Slope
*/
    static Slope Read(std::istream& is);
/**
*@brief Перегрузка оператора вывода
*@param os поток вывода
*@param s объект уклона
*@return поток вывода
*/
    friend std::ostream& operator<<(std::ostream& os, const Slope& s);
};
