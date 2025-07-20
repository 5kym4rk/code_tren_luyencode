#include <stdio.h>
#include <math.h>

int main () {

    int a;
    scanf("%d", &a);

    int i;
    int count = 0;

    if (a > 0) {
        for (i = 1; i <= a; i++) {
            if (a % i == 0) {
                count++;
            }
        }
    }

    
    if (a < 0) {
        for (i = 1; i <= fabs(a); i++) {
            if (a % i == 0) {
                count++;
            }
        }
    }

    printf("%d", count);
    
    return 0;
}