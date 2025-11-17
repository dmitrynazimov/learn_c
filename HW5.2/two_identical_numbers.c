#include <stdio.h>

int main(){
    int number, last_digit;
    scanf("%d", &number);
    while (number) {
        last_digit = number % 10;
        number = number / 10;
        if (number % 10 == last_digit){
            printf("YES");
            break;
        }
    }
    if (!number)
        printf("NO");
}