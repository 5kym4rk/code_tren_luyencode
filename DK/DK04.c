#include <stdio.h>

int main() {

    double n;

    scanf("%lf", &n);

    int roundedNumber;
    
    if (n >= 0) {
        roundedNumber = (int)(n + 0.5);
    } 
    else {
        roundedNumber = (int)(n - 0.5);
    }
    
    printf("%d", roundedNumber);

    return 0;
}
