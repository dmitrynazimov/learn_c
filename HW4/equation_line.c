#include <stdio.h>

int main(void) {
    int X1;
    int Y1;
    int X2;
    int Y2;
    float K;
    float B;
    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
    K = (float)(Y1 - Y2) / (float)(X1 - X2);
    B = (float)Y2 - K * (float)X2;
    printf("%.2f %.2f", K, B);
    return 0;
}