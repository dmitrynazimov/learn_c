#include <stdio.h>

int main(void) {
    unsigned int number, next_number = 0, flag = 0;
    scanf("%d", &number);
    next_number = number % 10;      //находим последнюю цифру числа
    number = number / 10;           //получаем целую часть числа
    while (number != 0)
    {
        if (number % 10 >= next_number)
        {
            flag = 1;
            break;
        }
        next_number = number % 10;
        number = number / 10;
    }
    printf("%s", flag ? "NO" : "YES");
    return 0;
}
