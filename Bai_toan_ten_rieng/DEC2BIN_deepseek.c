#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        unsigned long long n;
        scanf("%llu", &n);
        if (n == 0) {
            printf("0\n");
            continue;
        }
        char buffer[65];
        int index = 0;
        // Tìm bit cao nhất và xây dựng chuỗi nhị phân
        for (int i = 63; i >= 0; i--) {
            unsigned long long mask = 1ULL << i;
            if (n & mask) {
                for (int j = i; j >= 0; j--) {
                    buffer[index++] = (n & (1ULL << j)) ? '1' : '0';
                }
                break;
            }
        }
        buffer[index] = '\0';
        printf("%s\n", buffer);
    }
    return 0;
}