#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%d", &number);

    int all_even = 1;

    while (number > 0) {
        int digit = number % 10;  // Получаем последнюю цифру
        if (digit % 2 != 0) {     // Проверяем на нечетность
            all_even = 0;
            break;
        }
        number /= 10;           // Отбрасываем последнюю цифру
    }
    if (all_even) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
