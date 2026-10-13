#include <stdio.h>
#include <stdlib.h>

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
double CheckNum(const double x, const double y);
/**
* @brief заменяет число x по условию
* @param x - значение переменной х
* @param y - значение переменной y
* @return рассчитанное значение
*/
double X(const double x, const double y);
/**
* @brief заменяет число y по условию
* @param x - значение переменной х
* @param y - значение переменной y
* @return рассчитанное значение
*/
double Y(const double x, const double y);
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
    printf("x = %lf\n",X(x,y));
    printf("y = %lf\n",Y(x,y));
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
    if (x == y) {
        printf("Error!");
        exit(1);
    }
}

double X(const double x, const double y) {
    if (x > y) {
        return x*y*2;
    }
    return (x+y)/2;
}

double Y(const double x, const double y) {
    if (x < y) {
        return x*y*2;
    }
    return (x+y)/2;
}