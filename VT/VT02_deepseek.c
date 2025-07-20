#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n < 2) {
        printf("NOT FOUND\n");
        return 0;
    }

    int max1 = a[0];
    int max2 = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] < max1 && a[i] > max2) {
            max2 = a[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("NOT FOUND\n");
    } else {
        printf("%d\n", max2);
    }

    return 0;
}