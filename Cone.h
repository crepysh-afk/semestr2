#ifndef CONE_H
#define CONE_H

/**
 * @class Cone
 * @brief Класс, описывающий геометрический конус.
 *
 * Конус задаётся координатами центра основания,
 * радиусом основания и высотой.
 */
class Cone {
private:
    double x, y, z;
    double radius;
    double height;

    void validate() const;   

public:
/**
     * @brief Конструктор класса Cone.
     * @param cx Координата X центра основания
     * @param cy Координата Y центра основания
     * @param cz Координата Z центра основания
     * @param r Радиус основания (должен быть > 0)
     * @param h Высота конуса (должна быть > 0)
     */
    Cone(double cx, double cy, double cz, double r, double h);
/**
     * @brief Вычисляет длину образующей конуса.
     * @return Длина образующей
     */
    double slantHeight() const;
 /**
     * @brief Вычисляет полную площадь поверхности конуса.
     * @return Площадь поверхности
 */
    double surfaceArea() const;
/**
     * @brief Выводит информацию о конусе в консоль.
*/
    void print() const;
};

#endif
