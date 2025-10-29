#include <stdio.h>

int main(void) {
    int x;
    int y;
    int z;
    int sum;
    scanf("%d%d%d", &x, &y, &z);
    sum = x + y + z;
    printf("%d+%d+%d=%d",x, y, z, sum);
    return 0;
}