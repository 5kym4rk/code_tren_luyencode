#include <stdio.h>

int main() {
    // Khai báo số bộ test
    int T;
    scanf("%d", &T);
    while (T--) {  // Lặp qua từng bộ test, 
        int n;     // Kết quả của mỗi bộ test ghi 1 dòng
        scanf("%d", &n);
        double S = 0;
        double mau = 0;

        // tính tổng S = 1/1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+...+n)
        for (int i = 1; i <= n; i++) {
            mau += i;
            S += 1 / mau;
        }
        // In ra kết quả
        printf("%.8lf", S);
    }

    return 0;
}

// bài này test đúng nhưng nộp thì bị sai???