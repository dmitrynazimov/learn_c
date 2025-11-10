#include <stdio.h>

int main(void) {
    int a;
    int b;
    int sum = 0;
    scanf("%d%d", &a, &b);
    if (a <= 100 && b <= 100) {
        for (int i = a; i <= b; i++) {
            int j = i * i;      //переменнная j хранит кватрат числа
            sum = sum + j;      //cумма квадратов
        }
        printf("%d", sum);
    }
    return 0;
}