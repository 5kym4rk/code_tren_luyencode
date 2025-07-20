#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int i;
    int tong = 0;

    if (n <= 0) {
        printf("NO");
    }
    else {
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                tong += i;
            }
        }
        if (tong == n) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    
    return 0;
}