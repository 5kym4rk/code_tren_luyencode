#include <stdio.h>

int main() {

    int a, b, c;
    int max;

    scanf("%d " "%d " "%d", &a, &b, &c);
    
    if (a > b) {
        if (a > c) {
            max = a;
            printf("%d", max);
        }
        else {
            max = c;
            printf("%d", max);
        }
    }
    else {
        if (b > c) {
            max = b;
            printf("%d", max);
        }
        else {
            max = c;
            printf("%d", max);
            }
    }
    return 0;
}