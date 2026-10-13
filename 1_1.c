#include <stdio.h>
#include <math.h>

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @return рассчитанное значение
 */
double A(const double x, const double y);

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @return рассчитанное значение
 */
double B(const double x, const double y);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double x =0.335;
    const double y =0.025;
    printf("A = %lf\n",A(x,y));
    printf("B = %lf",B(x,y));

    return 0;
}

double A(const double x, const double y)
{
    return 1+x+pow(x,2)/2+pow(x,3)/3+pow(x,4)/4;
}

double B(const double x, const double y)
{
    return x*(sin(pow(x,3)+pow(cos(y),2)));
}