#include <stdio.h>

int main(void) {
    int first_number;
    int second_number;
    int third_number;

    scanf("%d%d%d", &first_number, &second_number, &third_number);
    if (first_number < second_number && second_number < third_number) {
        printf("YES");
    }else {
        printf("NO");
    }

    return 0;
}