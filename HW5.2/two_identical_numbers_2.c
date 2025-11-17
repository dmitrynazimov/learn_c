#include <stdio.h>

int main(){
    int number, next_number, first_number;
    scanf("%d", &number);
    while (number > 0)
    {
        first_number = number % 10;     //находим первое число
        next_number = number / 10;      //находим число после остатка от деления
        while (next_number > 0)
        {
            if (first_number == next_number % 10)       //проверяем первое и следующее числа
            {
                printf("YES\n");
                return 0;
            }
            next_number /= 10;
        }
        number /= 10;
    }
    printf("NO\n");
    return 0;
}
