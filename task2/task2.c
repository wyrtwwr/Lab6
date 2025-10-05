#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "RUS");


    double x;
    printf("Введите значение x:\n");
    scanf("%lf", &x); 

    double f = 3 * x - 9;
    double f2 = 1 / (pow(x, 2) - 4);

    if (x <= 7) {
        printf("Результат: %.3f\n", f);
    }
    else {
        printf("Результат: %.3f\n", f2);
    }


}