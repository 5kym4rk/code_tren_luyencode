#include <stdio.h>
#include <stdlib.h>

int main() {
    // Khai báo số phần tử mảng
    int n;
    scanf("%d", &n);

    // Khai báo mảng a có n phần tử
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Biến đổi mảng
    for (i = 0; i < n; i++) {
        // Xử lý trường hợp i = 0 và i = n - 1
        if (i == 0) {
            a[i] += abs(a[i + 1]);
        }
        else
        if (i == n - 1) {
            a[i] += abs(a[i - 1]);
        }
        else if (i % 2 != 0) {
            a[i] += abs(a[i - 1] - a[i + 1]);
        }
    }

    // In mảng sau khi biến đổi
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}