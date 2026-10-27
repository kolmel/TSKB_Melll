#include <math.h>
#include <stdio.h>

/**
 * @brief Вычисляет значение Y по заданной формуле
 * @param x - значение x
 * @return значение Y
 */
double Y(const double x);
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main() {
    double x = 1;
    double xkon=3;
    double step=0.2;
    for (x; x<=xkon+step; x+=step) {
        printf("X = %lf, Y = %lf\n", x, Y(x));

    }
    return 0;
}

double Y(const double x) {
    return sin(log(x))-cos(log(x))+2*log(x);
}