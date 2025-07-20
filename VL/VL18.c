#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n)
    int i, a, b;
    while (N >= 100) {
        a = n % 10;
        n = n / 100;
        printf("%d", a);
    }
    for (i = 1; i <= 2; i++) {
        b = n % 10;
        n = n / 10;
        printf("%d", b);
    }
    printf("%d%d", a, b);
    return 0;
}

// không hiểu xưa mình code gì luôn 