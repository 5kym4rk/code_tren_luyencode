#include <stdio.h>
#define MAX_N 1000000

double H[MAX_N + 1];

//Tính trước harmonic numbers
void precompute() {
    H[0] = 0;
    for (int i = 1; i <= MAX_N; i++) {
        H[i] = H[i - 1] + 1.0 / i;
    }
}

int main() {
    precompute();

    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%.5lf\n", H[n]);
    }
    return 0;
}