#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    // Kiểm tra n có thỏa mãn không 
    // Thường thì điều kiện ở đề, không ở input
    if (n <= 1 || n >= 1000000) {
        return 1;
    }
    
    // Nhập mảng A
    int A[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    // Tìm phần tử lớn nhất trong mảng
    int max = A[0];
    for (i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    
    printf("%d", max);

    return 0; 
}
