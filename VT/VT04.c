#include <stdio.h>

int main() {
    // Khai báo số lượng phần tử mảng và giá trị cần kiểm tra
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);
    
    // Khai báo mảng a có n phần tử
    int i;
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Đếm số lần xuất hiện của x trong mảng a
    int count = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    
    // In kết quả
    if (count >= 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}