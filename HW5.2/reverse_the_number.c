#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d",&number);
    int reverse_number = 0;
    int remainder;
    while(number > 0)
    {
        remainder = number % 10; //находим остаток
        reverse_number = reverse_number * 10 + remainder;
        number = number / 10;
    }
    printf("%d",reverse_number);
    return 0;
}
