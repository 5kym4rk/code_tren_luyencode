#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int giaithua = 1;
    int i;
    for (i = 1; i <= n; i++) {
        giaithua *= i;
    }
    printf("%d", giaithua);
    return 0;
}