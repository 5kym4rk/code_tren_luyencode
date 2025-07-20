#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);

    int b;
    scanf("%d", &b);
    
    int m, n;
    m = abs(a);
    n = abs(b);
    
    int GCD = 1;
    int i;
    int min = m > n ? n : m;
    int max = m > n ? m : n;
    
    // Giải quyết trường hợp 1 trong hai sô bằng 0
    if (min == 0) {
        GCD = max;
    }

    // UCLN sẽ không lớn hơn số nhỏ hơn trong hai số
    for (i = 1; i <= min; i++) {
        if (m % i == 0 && n % i == 0) {
           if (i >= GCD) {
              GCD = i;
           }
        }
    }

    printf("%d", GCD);

    return 0;
}


// bài này có cách dùng đẳng cấp là công thức Eculid
// nhưng thời gian chạy chương trình hơi lâu