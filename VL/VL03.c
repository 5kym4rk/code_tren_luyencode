#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int S = 0;
    int i;

    for (i = 2; i <= n; i ++) {
        S += i;
    }

    S = S + 2 * n;

    printf("%d", S);
    
    return 0;
}