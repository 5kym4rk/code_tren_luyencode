#include <stdio.h>

int main() {

    double n, k;

    scanf("%lf %lf", &n, &k);

    double giaithua_n = 1;
    double giaithua_k = 1;
    double giaithua_nk = 1;

    for (int i = 1; i <= n; i++) {
        giaithua_n *= i;
    }
    
    for (int i = 1; i <= k; i++) {
        giaithua_k *= i;
    }

    for (int i = 1; i <= (n - k); i++) {
        giaithua_nk *= i;
    }

    printf("%.0lf", giaithua_n / (giaithua_k * giaithua_nk));
    
    return 0;
}