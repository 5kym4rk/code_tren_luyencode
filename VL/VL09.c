#include <stdio.h>
#include <math.h>

int main() {

    double x, n;

    scanf("%lf %lf", &x, &n);

    double giaithua = 1;
    double S = 0;
    double i;
    double a = 0;

    for (i = 1; i <= n; i++) {
        giaithua *= i;
        a = pow(x,i);
        S = S + a / giaithua;
    }

    printf("%.2lf", S);
    
    return 0;
}