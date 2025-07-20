#include <stdio.h>

int main() {

    double a, b;

    scanf("%lf " "%lf", &a, &b);
    
    if (a == 0) {
        if (b != 0) {
            printf("NO");
        }
        else {
            printf("WOW");
        }
    }
    else {
        printf("%.2lf", -b / a);
    }
    return 0;
}