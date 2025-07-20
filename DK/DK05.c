#include <stdio.h>
#include <math.h>

int main() {

    double n;

    scanf("%lf", &n);

    double a;

    if (n >= 0) {
        a = sqrt(n) - (int)(sqrt(n));
        if (a == 0) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }
    
    return 0;
}