#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
* @brief Проверяет не является ли x нулём
* @param x - значение переменной х
* @return 0 если если число не равно нулю, иначе "Error!" и завершение программы
*/
double checkNum(const double x);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter x\n");
    double x = getDouble();
    checkNum(x);
    const double a = 1.65;
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
double checkNum(const double x) {
    if (x==0.0) {
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