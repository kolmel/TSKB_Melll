#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
/**
 * @brief Выводит текст и считывает с клавиатуры занчение с плавающей точкой
 * @param *string - текст
 * @return Считанное значение
 */
double getDouble(const char *string);
/**
 * @brief Вычисляет факториал для введённого числа
 * @param k - введённое число
 * @return Считанное значение
 */
long long factr(const int k);
/**
 * @brief Вычисляет значение y по введённому х
 * @param x - введённое число
 * @return Считанное значение
 */
double Y(const double x);
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение x
 * @param n - колличество слагаемых
 * @return Считанное значение
 */
double summ(const double x, const int n);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    double xnach = getDouble("Enter initial x:");
    double xkon = getDouble("Enter final x:");
    double h = getDouble("Enter step:");
    double e = getDouble("Enter accuracy:");
    double summa = 0.0;
    int n=0;
    for (xnach;xnach<= xkon+DBL_EPSILON;xnach+=h) {
        if (summ(xnach,n)>=e+DBL_EPSILON) {
            printf("X: %lf ", xnach);
            printf("Y: %lf ",Y(xnach));
            printf("Summ: %lf\n",summ(xnach,n));
            n++;

        }
        else {
            exit(1);
        }

    }

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

long long factr(const int k) {
    if (k<=1) {
        return 1;
    }
    return k*factr(k-1);
}

double Y(const double x) {
    return cos(x);
}

double summ(const double x, const int n) {
    if (n<=0){return 1;}
    return pow(-1,n)*pow(x,2*n)/factr(2*n)+summ(x,n-1);
}