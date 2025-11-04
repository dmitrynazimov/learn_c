#include <stdio.h>

int main(void) {
    int first_nuber;
    int second_number;
    scanf("%d%d", &first_nuber, &second_number);
    if (first_nuber > second_number) {
        printf("Above");
    }else if (first_nuber < second_number) {
        printf("Less");
    }else
        printf("Equal");
    return 0;
}