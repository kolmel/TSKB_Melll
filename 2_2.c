#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение водимого числа х
 * @param a - начение переменной a
 * @return рассчитанное значение
 */
double Y(const double x, const double a);
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
* @brief Проверяет ограничения функции
* @param x - значение переменной х
* @param a - значение переменной a
* @return 0 если ограничения функции не нарушены, иначе "Error!" и завершение программы
*/
double checkNum(const double x, const double a);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter x\n");
    double x = getDouble();
    printf("Enter a\n");
    double a = getDouble();
    checkNum(x,a);
    printf("Y = %lf\n",Y(x,a));
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
double checkNum(const double x, const double a) {
    if (fabs(x)<=DBL_EPSILON || (x>=1.34 && (x+a)<(DBL_EPSILON))) {
        printf("Error!");
        exit(1);
    }
}

double Y(const double x, const double a) {
    if (x<1.34) {
        return M_PI * pow(x,2)-7/pow(x,2);
    }
    else {
        return log(x+7*sqrt(x+a));
    }
}
