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
 * @param pref - значение переменной pref
 * @param k - значение переменной k
 * @return Рассчитанное значение
 */
double vir(const int k, const double pref);

/**
 * @brief Проверяет ограничение для функции
 * @param k - значение k
 * @return 0 если ограничения программы не нарушены, иначе "Error!" и завершение программы
 */
double cheknum(const int k, const double e);
/**
 * @brief Вычисляет сумму n чисел
 * @param n - значение n
 * @return Рассчитанное значение
 */
double summnac(const int n);
/**
 * @brief Вычисляет сумму чисел по модулю меньших e
 * @param e - значение e
 * @return Рассчитанное значение
 */
double sume(const double e);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    int n = getInt("Enter a number of n: ");
    double e = getDouble("Enter a number of e: ");
    cheknum(n, e);
    printf("%lf\n",summnac(n));
    printf("%lf",sume(e));
    return 0;
}

int getInt(const char *string) {
    if (string==NULL) {
        printf("Error");
        exit(1);
    }
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
    if (string==NULL) {
        printf("Error");
        exit(1);
    }
    printf("%s", string);
    double value = 0.0;
    if (scanf("%lf",&value) != 1) {
        printf("Error");
        exit(1);
    }
    return value;
}

double vir(const int k,const double pref) {
    return pref * (-1)/pow((k+1),2);
}

double cheknum(const int k, const double e) {
    if (k<1|| fabs(e)<=DBL_EPSILON) {
        printf("Error");
        exit(1);
    }
}

double summnac(const int n) {
    double pipupa =-1.0;
    double summnach = -1.0;
    for (int k=1; k<=n-1; k++) {
        pipupa=vir(k,pipupa);
        summnach += pipupa;
    }
    return summnach;
}

double sume(const double e) {
    double summe = 0.0;
    double pipupa=-1.0;
    for (int k=1;fabs(pipupa)>=e;k++) {
        summe+=pipupa;
        pipupa=vir(k,pipupa);
    }
    return summe;
}
