#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d%d", &a, &b);
    if (a <= 100 && b <= 100) {
        for (int i = a; i <= b; i++) {
            printf("%d ", i * i);
        }
    }
    return 0;
}