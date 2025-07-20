#include <stdio.h> 
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int i;
    int a;
    a = abs(n);

    if (a == 0) {
        printf("INF");
    }
    else {
        for (i = a; i >= 1; i--) {
            if (a % i == 0) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}