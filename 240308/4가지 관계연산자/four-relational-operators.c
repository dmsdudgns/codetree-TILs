#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%b\n", a>=b);
    printf("%d\n", a>b);
    printf("%d\n", b>=a);
    printf("%d", b>a);

    return 0;
}