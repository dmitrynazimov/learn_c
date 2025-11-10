#include <stdio.h>

int main(void) {
    unsigned int number;
    int sum = 0;
    scanf("%d", &number);
        while (number > 0) {
            int digit = number % 10;        //находим первую цифру введенного числа(извлекаем последнюю цифру)
            sum = sum + digit;              //прибовляем эту цифру к сумме
            number = number / 10;           //отбрасываем последнюю цифру
        }
        printf("%d", sum);
    return 0;
}