#include <stdio.h>

int main() {
    int min = 9, max = 0;
    int number;
    scanf("%d", &number);
    while(number) {
        int digit = number % 10;
        if(digit < min) {
            min = digit;
        }
        if(digit > max) {
            max = digit;
        }
        number = number / 10;
    }
    printf("%d %d", min, max);
    return 0;
}