#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 10 == 0) {
        n = n / 10;
        while (n / 10 > 0) {
            printf("%d", n % 10);
            n = n / 10;
        }
        printf("%d", n); // in ra chữ số cuối cùng
    } else {
        while (n / 10 > 0) {
            printf("%d", n % 10);
            n = n / 10;
        }
        printf("%d", n); // in ra chữ số cuối cùng
    }

    return 0;
}

// số quá lớn bắt buộc phải dùng mảng để lưu kết quả