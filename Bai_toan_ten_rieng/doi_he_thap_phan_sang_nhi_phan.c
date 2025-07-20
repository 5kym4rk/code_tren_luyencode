#include <stdio.h>

int main() {
    // khai báo số thập phân cần chuyển
    int n;
    scanf("%d", &n);

    int binary[100];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
