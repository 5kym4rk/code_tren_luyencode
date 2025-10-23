#include <stdio.h>
#include <math.h>

#define MAX_N 1000

double S[MAX_N + 2];

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        // Tính từ dưới lên
        S[n] = sqrt(n);
        for (int i = n - 1; i >= 1; i--) {
            S[i] = sqrt(i + S[i + 1]);
        }

        printf("%.5lf\n", S[1]);
    }

    return 0;
}


// bài này không cần tính trước vì phải tính ngược từ 
// S[n] đến S[0], nên ta tính trực tiếp trong hàm main luôn
// Và cách để ý giới hạn sẽ thấy n không vượt quá 1000000
// so với các bài trước n gần 10^6