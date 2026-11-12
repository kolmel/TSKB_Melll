#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
/**
 * @brief Считывает с клавиатуры целочисленное значение
 * @return Считанное значение
 */
int getInt(const char *string);
/**
 * @brief Выводит текст и считывает с клавиатуры занчение с плавающей точкой
 * @param *string - текст
 * @return Считанное значение
 */
double getDouble(const char *string);
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param k - значение переменной k
 * @return рассчитанное значение
 */
double vir(const int k);

/**
 * @brief Проверяет ограничение для функции
 * @param k - значение k
 * @return 0 если ограничения программы не нарушены, иначе "Error!" и завершение программы
 */
double cheknum(const int k);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    int k=1; //getInt("Enter a number of k: ")/
    int n = getInt("Enter a number of n: ");
    double e = getDouble("Enter a number of e: ");
    cheknum(n);
    double summe = 0.0;
    double summnach = 0.0;
    for (k; k<=n; k++) {
        summnach += vir(k);
        if  (fabs(vir(k))-e>=DBL_EPSILON) {
            summe += vir(k);
        }
    }
    printf("%lf\n",summnach);
    printf("%lf",summe);
}

int getInt(const char *string) {
    printf("%s", string);
    int value = 0;
    if (scanf("%d",&value) != 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}

double getDouble(const char *string) {
    printf("%s", string);
    double value = 0.0;
    if (scanf("%lf",&value) != 1) {
        printf("Error");
        exit(1);
    }
    return value;
}

double vir(const int k) {

    if (k==1) {
        return -1;
    }
    return -1*vir(k-1)/pow(k,2);
}

double cheknum(const int k) {
    if (k<1) {
        printf("Error");
        exit(1);
    }
}
