#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    int i;

    if (n <= 1 ) {
        printf("NO");
    }
    else {
        for (i = 1; i <= n ; i++){
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }

    return 0;
} 