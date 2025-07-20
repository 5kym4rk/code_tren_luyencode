#include <stdio.h>
#include <math.h>

int main(){
    
    double a, b, c, x1, x2, delta;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    delta = b * b - 4 * a * c;

    if (a == 0 && b == 0 && c == 0) {
        printf("WOW");
    }

    if (a == 0 && b == 0 && c != 0) {
        printf("NO");
    }

    if (a == 0 && b != 0 && c == 0) {
        printf("%d", x1 = 0);
    }

    if (a != 0) { 
        if (b == 0 && c == 0) {
            x1 = 0;
            printf("%d", x1);
        }
        if (b == 0 && c != 0) {
            x1 = -sqrt(-c / a);
            x2 =  sqrt(-c / a);
            printf("%d %d", x1, x2);
        }
        if (b != 0 && c == 0)
    }
    {
        printf("NO");
    }
    else if (delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("%.2lf %.2lf", x1, x2);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.2lf %.2lf", x1, x2);
    }

    return 0;
}
