#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    int d;
    int e;
    int sum_max_min;
    int max;
    int min;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = (a > b) ? a : b;
    max = (c > max) ? c : max;
    max = (d > max) ? d : max;
    max = (e > max) ? e : max;

    min = (a < b) ? a : b;
    min = (c < min) ? c : min;
    min = (d < min) ? d : min;
    min = (e < min) ? e : min;

    sum_max_min = max + min;
    printf("%d", sum_max_min);
    return 0;
}