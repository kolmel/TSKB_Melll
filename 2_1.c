#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
enum OPERATIONS{
    SUMM,
    DIFERENCE,
    PRODUCT,
    QUOTIENT
};
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Считывает с клавиатуры целочисленное значение
 * @return Считанное значение
 */
int getInt();
/**
 * @brief Проверяет что поступившее число не 0
 * @param chk - поступившее число
 * @return 0 если число не 0, иначе "Error!" и завершение программы
 */
double checkNum(const double chk);
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main()
{
    printf("Enter two numbers\n");
    double ch1=getDouble();
    double ch2=getDouble();
    checkNum(ch2);
    printf("Enter the operation: 0(SUMM), 1(DIFERENCE), 2(PRODUCT), 3(QUOTIENT)\n");
    int op = getInt();
    enum OPERATIONS oper = op;
    switch (oper) {
        case SUMM:
            printf("%lf",ch1+ch2);
            break;
        case DIFERENCE:
            printf("%lf",ch1-ch2);
            break;
        case PRODUCT:
            printf("%lf",ch1*ch2);
            break;
        case QUOTIENT:
            printf("%lf",ch1/ch2);
            break;
        default:
            printf("Error");
            exit(1);
    }
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
int getInt() {
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}

double checkNum(const double chk) {
    if (fabs(chk)<=DBL_EPSILON) {
        printf("Error");
        exit(1);
    }
}
