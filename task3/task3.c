#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int x;
    printf("Введите температуру: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("лед\n");
    }
    else if (x > 0 && x < 100) {
        printf("вода\n");
    }
    else if (x >= 100) {
        printf("пар\n");
    }

}