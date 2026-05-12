#pragma once
#include <string>

/**
 * @brief Абстрактный базовый класс Ограничение.
 */
class Restriction
{
public:

    /**
     * @brief Сериализация объекта в строку.
     * @return Строковое представление объекта.
     */
    virtual std::string ToString() const = 0;

    /**
     * @brief Виртуальный деструктор.
     */
    virtual ~Restriction() = default;
};
