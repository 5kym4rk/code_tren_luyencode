#include <stdio.h>
#include <math.h>

int main() {

    double n;

    scanf("%lf", &n);

    double a = sqrt(n);
    int i;
    int count = 0;

    for (i = 0; i <= n/2; i++) {
        if (i == a) {
            count ++;
        }
    }

    if (count == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}

// code đã hết lỗi logic nhưng vẫn TLE