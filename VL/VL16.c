#include <stdio.h>

int main() {
    int a;
    scanf("&d", &a);

    int b;
    scanf("%d", &b);

    int max;
    max = a > b ? a : b;
    int i;

    for (i >= max; ; i++) {
        if(i % a == 0 && i % b == 0) break;
    }
    
    printf("%d", i);
    
    return 0;
}