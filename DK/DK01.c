#include <stdio.h>

int main() {
    
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        printf("%d\n", a);
    } else if (b > a) {
        printf("%d\n", b);
    } else {
        printf("%d\n", a);  // trường hợp a và b bằng nhau
    
    }

    return 0;
}

