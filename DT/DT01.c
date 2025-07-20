#include <stdio.h>
#include <math.h>
#define PI acos(-1) // Định nghĩa số PI

int main () {
    // Đọc vào bán kính hình tròn
    double a;
    scanf("%lf", &a);
    
    // Tính diện tích nửa hình tròn
    double dt = (a * a * PI) / 2;

    // In ra kết quả
    printf("%.3lf", dt);

    return 0;
}

