#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int S = 0;
    int i;

    for (i = 1; i <= n; i++) {
        S = S + i;
    }

    printf("%d", S);
    
    return 0;
}