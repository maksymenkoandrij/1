#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    // Зчитування вхідних даних
    printf("Введіть час t1: ");
    scanf("%d", &t1);

    printf("Введіть час t2: ");
    scanf("%d", &t2);

    printf("Введіть час t3: ");
    scanf("%d", &t3);

    // Обчислення загального часу
    total_time = (double)(t1 + t2 + t3);

    // Виведення результату
    printf("Гості зможуть з'їсти пиріг за %.2f годин\n", total_time);

    return 0;
}
