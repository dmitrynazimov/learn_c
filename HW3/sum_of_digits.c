#include <stdio.h>

int main(void) {
    int x;
    int first_digits;
    int second_digits;
    int third_digits;
    int sum_of_digits;
    scanf("%d", &x);
    first_digits = x%10;   //находим первое число
    second_digits = (x/10)%10;   //находим второе число
    third_digits = (x/100)%10;   //находим третье число
    sum_of_digits = first_digits + second_digits + third_digits;    //сумма
    printf("%d", sum_of_digits);
    return 0;
}