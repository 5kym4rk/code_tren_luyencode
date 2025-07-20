#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int S = 0;
    int i;

    for (i = 0; i <= (3 * n + 1); i ++) {
        if (i % 2 == 0){
            S = S - i;
        }
        else {
            S = S + i;
        }
    }

    printf("%d", S);
    
    return 0;
}