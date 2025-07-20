#include <stdio.h>
#include <string.h>

int main() {
    char n[1002];
    fgets(n, sizeof(n), stdin);

    size_t length = strlen(n);
    if (length > 0 && n[length - 1] == '\n') {
        n[length - 1] = '\0';
        length--;
    }

    if (n[0] == '-') {
        printf("%zu", length - 1);
    }
    else {
        printf("%zu", length);
    }

    return 0;
}