#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a > b) {
        a = b;
    }
    if (b > c) {
        c = b;
    }
    if (c > d) {
        d = c;
    }
    if (d > e) {
        e = d;
    }
    printf("%d", e);
    return 0;
}