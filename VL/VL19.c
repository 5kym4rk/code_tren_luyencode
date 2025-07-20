#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    int count = 0;
    for (i = b -1; i > a; i--) {
        if (i % 3 == 0) {
            count++;
            printf("%d ", i);
        } 
    }
    
    if (count == 0) {
        printf("NOT FOUND");
    }

    return 0;
}