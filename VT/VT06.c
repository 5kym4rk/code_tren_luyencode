#include <stdio.h>
#include <math.h>

int main() {
    // Khai báo số lượng phần tử mảng
    int n;
    scanf("%d", &n);

    // Khai báo mảng A có n phần tử
    int A[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    // Tính trung bình cộng các số lẻ trong mảng A
    double count = 0;
    double dem = 0;
    for (i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            count += A[i];
            dem++;
        }
    }
    
    // Kiểm tra nếu mảng không có số lẻ thì trung bình cộng bằng 0
    double average;
    if (dem != 0) {
        average = count / dem;
    }
    else {
        average = 0;
    }
    
    // In ra kết quả với 4 chữ số thập phân
    printf("%.4lf", (round(average * 10000))/10000);
    
    return 0; 
}