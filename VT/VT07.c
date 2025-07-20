#include <stdio.h>

int main() {
    // Khai báo mảng a có 10 phần tử
    int a[10];
    int i;
    for (i = 0; i <= 9; i++) {
        scanf("%d ", &a[i]);
    }
    
    // Khai báo số thứ 11
    int num11;
    scanf("%d", &num11);

    // Đếm số lần xuất hiện của num11 trong mảng a
    int count = 0;
    for (i = 0; i <= 9; i++) {
        if (a[i] == num11) {
            count++;
            printf("%d ", i + 1);
        }
    }

    // Nếu num11 không xuất hiện trong mảng a
    if (count == 0) {
        printf("-1");
    }
    return 0;
}