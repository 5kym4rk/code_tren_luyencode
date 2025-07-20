/*#include <stdio.h>

int main() {
    int a, b;
    int UCLN;
    scanf("%d %d", &a, &b);
    int i;
    if (a <= 0 || b <= 0)  {
        return 1;
    }
    else {
        for (i = 1; i <= (a < b) ? a : b; i++) {
            if (a % i == 0 && b % i == 0) {
                UCLN = i;
            }
        }
        printf("%d", UCLN);
    }
    return 0;
}*/


#include <stdio.h>


int findGCD(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a == 0 || b == 0) {
        return 1; 
    }

    if (a < -10000 || a > 10000 || b < -10000 || b > 10000) {
        return 1; 
    }

    int gcd = findGCD(a, b);
    printf("%d", gcd);

    return 0; 
}

// không hiểu ngày xưa mình viết cái gì