#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = A[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            int left = 0, right = 0;
            if (i > 0) {
                left = temp[i - 1];
            }
            if (i < n - 1) {
                right = temp[i + 1];
            }
            A[i] += abs(left - right);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}

//mình không hiểu đề bài cho lắm