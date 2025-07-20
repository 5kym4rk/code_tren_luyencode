#include <stdio.h>

int main() {

    char a, b;
    scanf("%c %c", &a, &b);

    char c;

    for (c = a; c <= b; c++) {  // mình chưa phân biệt được ký tự và số
        if (c >= 'a' && c <= 'z') {
            printf("%c ", c - 'a' + 'A');
        }
    }
    return 0;
}
