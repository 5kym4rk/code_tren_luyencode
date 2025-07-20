#include <stdio.h>

int main() {
    // Khai báo số lượng phần tử mảng
    int n;
    scanf("%d", &n);
    
    // Khai báo mảng a có n phần tử
    int i;
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Đặt các giá trị ban đầu
    int max = a[0];
    int chiso = 0;
    
    // Xử lý nếu mảng có 2 phần tử
    if (n == 2) {
        if (a[0] == a[1]) {
            chiso = 1;
        }
    }
    for (i = 1; i < n; i++) {
        if (a[i] >= max) {
            max = a[i];
            chiso = i;
        }
    }
    printf("%d", chiso);
    return 0;
}