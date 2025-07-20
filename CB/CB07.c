#include <stdio.h>
#define PI 3.14

int main() {

    double r;

    scanf("%lf", &r);
    
    printf("%.3f " "%.3f", 2 * PI * r, PI * r * r);

    return 0;
}