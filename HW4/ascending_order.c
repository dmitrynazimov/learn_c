#include <stdio.h>

    int main(void){
        int x;
        int y;
        scanf("%d%d", &x, &y);
        if (x > y)
            printf("%d %d", y, x);
        else
            printf("%d %d", x, y);
    return 0;
}