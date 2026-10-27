#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Вычисляет значение Y по заданной формуле
 * @param x - значение x
 * @return значение Y
 */
double Y(const double x);
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main() {
    printf("Enter the initial value of x: ");
    double x = getDouble();
    printf("Enter the final value of x: ");
    double xkon=getDouble();
    printf("Enter the step size: ");
    double step=getDouble();
    for (x; x<xkon+step; x+=step) {
        printf("X = %lf, Y = %lf\n", x, Y(x));

    }
    return 0;
}
double getDouble() {
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}

double Y(const double x) {
    return sin(log(x))-cos(log(x))+2*log(x);
}
