#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
* @brief Проверяет не является ли второе число нулём
* @param ch2 второе число
* @return 0 если если число не равно нулю, иначе "Error!" и завершение программы
*/
double checkNum(const double ch2);
/**
 * @brief Находит сумму, разность, произведение или частное двух числе в зависимости от введенной операции
 * @param ch1,ch2 - вводимые числа
 * @param op - символ операции
 * @return Расчитанное значение
 */
void vyvod(const double ch1, const double ch2, const double op);
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main()
{
    printf("Enter two numbers\n");
    double ch1=getDouble();
    double ch2=getDouble();
    printf("Enter the operation: 1(Summ), 2(Difference), 3(Product), 4(Quotient)\n");
    double op = getDouble();
    vyvod(ch1,ch2, op);
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
double CheckNum(const double ch2) {
    if (fabs(ch2)>DBL_EPSILON) {
        printf("Error!");
        exit(1);
    }
}
void vyvod(const double ch1, const double ch2, const double op) {
    if (op==1) {
        printf("Sum of numbers: %lf",(ch1+ch2));
        exit(1);
    }
    if (op==2) {
        printf("Number difference: %lf",(ch1-ch2));
        exit(1);
    }
    if (op==3) {
        printf("Product of numbers: %lf",(ch1*ch2));
        exit(1);
    }
    if (op==4) {
        printf("Quotient of numbers: %lf",(ch1/ch2));
        exit(1);
    }
    else{
        printf("Error!");
    }
}
