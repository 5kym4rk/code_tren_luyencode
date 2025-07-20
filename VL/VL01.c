#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int i;

    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }
    
    return 0;
}