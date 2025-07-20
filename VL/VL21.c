/*#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++) {
        n -= i;
        if (n == 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}*/


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int x = 1;  
    int sum = 0; 

    while (sum + x <= N) {
        sum += x;
        x++;
    }
    printf("%d", x - 1);

    return 0;
}

//không rõ ngày xưa mình tự code hay là nhờ chatGPT