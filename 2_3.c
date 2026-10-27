#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
double getDouble();
/**
* @brief Проверяет равны ли числа
* @param x - значение переменной х
* @param y - значение переменной y
* @return 0 если если числа не равны, иначе "Error!" и завершение программы
*/
double CheckNum(const double ch1, const double ch2);
/**
* @brief заменяет число по условию
* @param ch1 - значение переменной
* @param ch2 - значение переменной
* @return рассчитанное значение
*/
double vyvod(const double x, const double y);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    printf("Enter x\n");
    double x = getDouble();
    printf("Enter y\n");
    double y = getDouble();
    CheckNum(x, y);
    printf("x = %lf\n",vyvod(x,y));
    printf("y= %lf",vyvod(y,x));
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

double CheckNum(const double x, const double y) {
    if (fabs(x - y) <DBL_EPSILON) {
        printf("Error!");
        exit(1);
    }
}

double vyvod(const double ch1, const double ch2) {
    if (ch1 > ch2) {
        return ch1*ch2*2;
    }
    return (ch1+ch2)/2;

}
