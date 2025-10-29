#include <stdio.h>

int main(void) {
    int x;
    int y;
    int z;
    int sum;
    int multi;
    scanf("%d%d%d", &x, &y, &z);    //ввод данных
    sum = x + y + z;    //сумма
    multi = x * y * z;  //произведение
    printf("%d+%d+%d=%d\n", x, y , z, sum);  //вывод суммы
    printf("%d*%d*%d=%d\n", x, y, z, multi);  //вывод произведения
    return 0;
}