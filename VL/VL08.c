#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int S = 0;
    int i;

    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            S += i;
        }
    }

    printf("%d", S);
    
    return 0;
}