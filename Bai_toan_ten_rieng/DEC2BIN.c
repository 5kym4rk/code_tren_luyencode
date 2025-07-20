#include <stdio.h>

int main() {
    // Khai báo T số bộ test
    int T;
    scanf("%d", &T);
    
    // n là số cần chuyển sang nhị phân
    int n;
    for (int i = 0; i < T; ++i) {
        scanf("%d \n", &n);
    }
    
    // Chuyển đổi n sang nhị phân
    int binary[100];
    int i = 0;
    while (n > 0) {
            binary[i] = n % 2;
            n /= 2;
            i++;
        }

        for (int j = i - 1; j >= 0; --j) {
            printf("%d", binary[j]);
        }
        printf("\n");
}