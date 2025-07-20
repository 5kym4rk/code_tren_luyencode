#include <stdio.h>

void decimalToBinary(long long n) {
    int binary[64]; // Mảng để lưu các chữ số nhị phân
    int i = 0;

    // Chuyển đổi số thập phân sang nhị phân
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    // In các chữ số nhị phân theo thứ tự ngược lại
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T); // Đọc số lượng test cases

    for (int t = 0; t < T; t++) {
        long long n;
        scanf("%lld", &n); // Đọc số nguyên dương
        decimalToBinary(n); // Chuyển đổi và in kết quả
    }

    return 0;
}