#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief вычисляет изменение температуры
 * @param mas - вводимая масса
 * @param energ - вводимое колличество теплоты
 * @param udtepl - удельная теплоемкость серебряной ложки
 * @return рассчитанное значение
 */
double temp(double const mas, double const energ, const double udtepl);
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main()
{
    const double udtepl = 250;
    printf("Enter mass, then energy.\n");
    double mas=getDouble();
    double energ=getDouble();
    printf("Temperature change: %lf", temp(mas,energ,udtepl));
    return 0;
}

double getDouble()
{
    double ch1 = 0.0;
    scanf("%lf",&ch1);
    return ch1;
}

double temp(double const mas, double const energ, const double udtepl) {
    return abs(energ/udtepl/mas);
}