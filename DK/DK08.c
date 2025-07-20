#include <stdio.h>

int main() {
    double a, b;
    char dau;
    scanf("%lf %c %lf", &a, &dau, &b);
        switch(dau) {
            case '+':
                printf("%.2lf", a + b);
                break;
            case '-':
                printf("%.2lf", a - b);
                break;
            case '*':
                printf("%.2lf", a * b);
                break;
            case '/':
                if (b == 0) {
                    printf("Math Error");
                }
                else {
                    printf("%.2lf", a / b);
                }
                break;
            }
    
    return 0;
}