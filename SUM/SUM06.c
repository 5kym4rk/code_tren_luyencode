#include <stdio.h>
#include <math.h>

#define MAX_N 1000000

double S[MAX_N + 1];

// Tính trước biểu thức
void precompute() {
    S[0] = 0.0;
    for (int i = 1; i <= MAX_N; i++) {
        S[i] = sqrt(S[i - 1] + 2);
    }
}
int main() {
    precompute();

    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%.5lf\n", S[n]);
    }
}