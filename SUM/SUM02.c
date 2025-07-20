#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Khai báo số nguyên dương n
    double n;
    scanf("%lf", &n);
    
    // Tính tổng S = 1^2 + 2^2 + 3^2 + ... + n^2
    double S = 0;
    for (int i = 1; i <= n; i++) {
        S = S + pow(i, 2);
    }

    // In ra kết quả
    printf("%.lf", S);

    return 0;

}

// Khó hiểu thật sự phải để pow(i, 2) thay vì i*i
// Đề bài yêu cầu nhập vào số nguyên dương n, nhưng lại dùng kiểu double