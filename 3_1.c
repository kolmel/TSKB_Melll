#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
/**
 * @brief Вычисляет значение Y по заданной формуле
 * @param x - значение x
 * @return значение Y
 */
double Y(const double x);
/**
 * @brief Выводит текст и считывает с клавиатуры занчение с плавающей точкой
 * @param *string - текст
 * @return Считанное значение
 */
double getDouble(const char *string);

/**
 * @brief Проверяет ограничения программы
 * @param x - значение переменной x
 * @param x_kon - значение переменной x_kon
 * @param step - значение переменной step
 * @return 0 если ограничения программы не нарушены, иначе "Error!" и завершение программы
 */
double checkNum(const double x, const double x_kon, const double step);
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main() {
    double x = getDouble("Enter the initial value of x: ");
    double x_kon=getDouble("Enter the final value of x: ");
    double step=getDouble("Enter the step size: ");
    checkNum(x,x_kon,step);
    for (x; x<x_kon+step; x+=step) {
        printf("X = %lf", x);
        if (x<=DBL_EPSILON) {
            printf(" Cant calculate it with this x.\n");
        }
        else {
            printf("Y = %lf\n", Y(x));
        }
    }
    return 0;
}
double getDouble(const char *string) {
    printf("%s", string);
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}
double checkNum(const double x,const double x_kon, const double step) {
    if (x_kon-x<=DBL_EPSILON || step<=DBL_EPSILON) {
        printf("Error");
        exit(1);
    }
}
double Y(const double x) {
    return sin(log(x))-cos(log(x))+2*log(x);
}
