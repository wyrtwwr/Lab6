# Домашнее задание к работе 5
## Условие задачи
Написать программу вычисления значения функции двух переменных. Результат проверить на контрольном примере.

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
=== СИСТЕМА КОНТРОЛЯ ДОСТУПА ЭНЕРГИИ===
введите x:1,2223
введите y:3,4343
Введеные значения:x = 1,222300, y = 3,434300
F(1,222300, 3,434300) = 0,004029
Контрольные примеры:
x2 = 1,900000 ,y2 = -1,000000
F(1.9, -1.0) = 0,091668
x3 = 1,600000 ,y3 = -0,005701
F(1.9, -1.0) = 0,000498

<img  src="https://raw.githubusercontent.com/wyrtwwr/email-assets/refs/heads/main/%D0%BB%D0%B0%D0%B1%D0%B06_%D0%BE%D0%BA%D0%BB%D0%B0%D0%B4.jpg" width="981" height="266">
