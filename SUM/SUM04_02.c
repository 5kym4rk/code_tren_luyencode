#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        double result = (2.0 * n) / (n + 1);
        printf("%.8lf\n", result);
    }
    return 0;
}

// bài này tham khảo từ deepseek 