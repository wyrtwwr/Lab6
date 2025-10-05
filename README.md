# Домашнее задание к работе 5
## Условие задачи
Написать программу, которая по заданной температуре воды
определяет ее состояние – пар, жидкое, лед.

## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. ввод значений :
   - `x` = первое число.
3.Проверка:
   - `x <= 0` = Лед.
   - `0 < x < 100` = вода.
   - `x >= 100` = пар.
6. **Конец**
   
### Блок-схема
<img width="122" height="421" alt="Диаграмма без названия drawio" src="https://raw.githubusercontent.com/wyrtwwr/email-assets/refs/heads/main/%D0%BB%D0%B0%D0%B1%D0%B06_%D1%81%D1%85%D0%B5%D0%BC%D0%B0.jpg" />

## 2. Реализация программы
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

## 3. Результаты работы программы
Введите температуру: 60
вода

<img  src="https://raw.githubusercontent.com/wyrtwwr/email-assets/refs/heads/main/%D0%BB%D0%B0%D0%B1%D0%B06_%D0%BE%D0%BA%D0%BB%D0%B0%D0%B4.jpg" width="981" height="266">
