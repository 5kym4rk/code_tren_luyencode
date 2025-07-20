#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 2 && n <= 1000000) {
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        // Tìm phần tử lớn nhất
        int firstmax = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > firstmax) {
                firstmax = a[i];
            }
        }

        // Tìm phần tử lớn thứ 2
        int secondmax = -1000000001; // Giá trị nhỏ hơn giá trị nhỏ nhất có thể có trong mảng
        for (int i = 0; i < n; i++) {
            if (a[i] > secondmax && a[i] < firstmax) {
                secondmax = a[i];
            }
        }

        if (secondmax == -1000000001) {
            printf("NOT FOUND");
        } else {
            printf("%d", secondmax);
        }
    }

    return 0;
}