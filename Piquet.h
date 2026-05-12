#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс Пикет.
 */
class Piquet
{
private:
/**
*@brief number - Номер пикета
*/
    int number;
/**
*@brief shift - Смещение
*/
    double shift;
/**
*@brief isStandard - Стандартный ли пикет
*/
    bool isStandard;     ///< Стандартный ли пикет

public:
/**
*@brief конструктор класса Piquet
*@param number номер пикета
*@param shift Смещение
*@param isStandard Признак стандартности пикета
*@throws std::invalid_argument Если смещение отрицательное
*/

    Piquet(const int number,const double shift,const bool isStandard = true);
/**
*@brief Преобразует пикет в строку
*@return Строковое представление пикета
*/
    std::string ToString() const;
/**
*@brief Перегрузка оператора вывода
*@param os поток вывода
*@param p пикет
*@return поток вывода
*/
    friend std::ostream& operator<<(std::ostream& os, const Piquet& p);
/**
*@brief Перегрузка оператора ввода
*@param is поток ввода
*@param p пикет
*@return поток ввода
*/
    friend std::istream& operator>>(std::istream& is, Piquet& p);
/**
*@brief оператор сравнения "меньше"
*@param other другой пикет
*@return true если текущий пикет меньше
*/
    bool operator<(const Piquet& other) const;
/**
*@brief оператор равенства
*@param other другой пикет
*@return true если пикеты равны
*/
    bool operator==(const Piquet& other) const;
};
