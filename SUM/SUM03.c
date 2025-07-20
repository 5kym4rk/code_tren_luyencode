#include <stdio.h>

int main() {
    // Khai báo số nguyên dương n
    double n;
    scanf("%lf", &n);

    // tính tổng S = 1/(1*2) + 1/(2*3) + ... + 1/(n*(n+1))
    double S = 1 - 1/(n+1);

    // In ra kết quả
    printf("%.5lf", S);

    return 0;

}