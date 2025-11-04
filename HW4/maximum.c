#include <stdio.h>
    int main(void) {
        int x;
        int y;
        int z;
        int max;
        scanf("%d%d%d", &x, &y, &z);
        if (x > y) {
            max = x;
        }else
            max = y;
        if (z > max)
            max = z;
        printf("%d", max);
    return 0;
}