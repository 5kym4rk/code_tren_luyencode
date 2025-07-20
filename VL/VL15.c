#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    

    if (b == 0) {
        printf("INVALID");
    }
    else {
        if (a == 0) {
            printf("0");
        } else {
        int m, n;
        m = abs(a);
        n = abs(b);
        
        int GCD = 1;
        int i;
        int min = m > n ? n : m;
        
        for (i = 1; i <= min; i++) {
            if (m % i == 0 && n % i == 0) {
               if (i >= GCD) {
                  GCD = i;
               }
            }
        }
        
        if((a < 0 && b > 0) || (a > 0 || b > 0)  { 
              printf("%d %d", (a / GCD), b / GCD);
        }

        if (a > 0 && b < 0) {
            printf("%d %d", -(a / GCD), (b / GCD));
        }

        if (a < 0 && b < 0) {
            printf("%d %d", abs(a / GCD), abs(b / GCD));
        }
    }
    return 0;

}