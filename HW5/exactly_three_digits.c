#include <stdio.h>

int main(void) {
    unsigned int number;
    int counter = 0;
    scanf("%d",&number);
    while (number > 0) {
        number = number / 10;
        counter = counter + 1;      //счётчик цикла
    }
    if (counter == 3) {
        printf("YES");
    }else
        printf("NO");

    return 0;
}