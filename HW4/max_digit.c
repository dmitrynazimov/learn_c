#include <stdio.h>

int main(void) {
    unsigned int x;
    int first_digit;
    int second_digit;
    int third_digit;
    int max_digit;

    scanf("%d", &x);

    first_digit = x % 10;
    second_digit = (x / 10) % 10;
    third_digit = (x / 100) % 10;

    max_digit = (first_digit > second_digit) ? first_digit : second_digit;
    max_digit = (third_digit > max_digit) ? third_digit : max_digit;
    printf("%d", max_digit);
    return 0;
}