#include <stdio.h>

int main() {
    // Khai báo số lượng phần tử mảng và giá trị cần kiểm tra
    int n, x;
    scanf("%d %d", &n, &x);
    
    // Khai báo mảng A có n phần tử
    int A[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Đếm số lần xuất hiện của x trong mảng A
    int count = 0;
    for (i = 0; i < n; i++) {
        if (A[i] == x) {
            count++;
        }
    }

    printf("%d", count);
    
    return 0;
}