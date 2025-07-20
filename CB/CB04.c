#include <stdio.h>

int main() {
    double a, b;

    scanf("%lf " "%lf", &a, &b);

    printf("%.0lf\n", a + b);
    printf("%.0lf\n", a - b);
    printf("%.0lf\n", a * b);

    double thuong = a / b;
    
    if (b == 0) {
        printf("ERROR");
    }
    else {
        printf("%.2lf", thuong);
    }
    return 0;
}