#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    const double LENGTH = 12.0; 
    const double WIDTH = 1.0;  
    double A = 8.5;    
    double B = 2.5;    
    double K = 350.0; 

    int strips_needed = (int)ceil(A / WIDTH);
    int strips_per_roll = (int)floor(LENGTH / B);
    int rolls_needed = (int)ceil((double)strips_needed / strips_per_roll);
    double total_cost = rolls_needed * K;

    printf("Исходные данные:\n");
    printf("  Длина стены  A = %.2f м\n", A);
    printf("  Высота стены B = %.2f м\n", B);
    printf("  Цена рулона  K = %.2f руб.\n\n", K);

    printf("Расчёт:\n");
    printf("  Нужно полос по длине стены   N = %d\n", strips_needed);
    printf("  Полос из одного рулона       M = %d\n", strips_per_roll);
    printf("  Нужно рулонов                R = %d\n", rolls_needed);
    printf("  Стоимость обоев для стены    S = %.2f руб.\n", total_cost);

    return 0;
}