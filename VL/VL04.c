#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    double S = 0;
    int i;

    for (i = 2; i <= n; i++) {
        S = S + (double)1 / i;
    }

    printf("%.4lf", S);
    
    return 0;
}