#include <stdio.h>

int main(void) {
    int x;
    int y;
    int z;
    float arithmetic_mean;
    scanf("%d%d%d", &x, &y, &z);
    arithmetic_mean = (x + y + z) / 3.0;    //средние арифметическое
    printf("%.2f", arithmetic_mean);
    return 0;
}