#include <stdio.h>

int main() {
    // Khai báo số phần tử mảng
    int a[10000];
    
    // Đọc các phần tử vào mảng cho đến khi gặp phần tử 0
    int i = 0;
    while (1) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            break;
        }
        i++;
    }
    
    // Duyệt mảng và in ra các số âm
    int j;
    int count = 0;
    for (j = 0; j < i; j++) {
        if (a[j] < 0) {
            printf("%d ", a[j]);
            count++;
        }
    }

    if (count == 0) {
        printf("NOT FOUND");
    }
    
    return 0;
}