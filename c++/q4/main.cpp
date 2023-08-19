#include <stdio.h>

int main() {
    int *p, *k, i;
    p = &i;
    *p = 26;

    printf("%d\n", p + 1);
    printf("%d\n", *p);
    printf("%d\n", *p + 1);
    printf("%d\n", &i);

    getchar();
    return 0;
}
