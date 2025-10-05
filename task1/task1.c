#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int year;

    printf("Введите год: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

        printf("Год %d високосный.\n", year);
    }
    else {

        printf("Год %d не високосный.\n", year);
    }

}