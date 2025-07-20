#include <stdio.h>

int main() {

    int year;

    scanf("%d", &year);

    if (0 < year && year <= 100000) {
        if (year % 400 == 0) {
            printf("YES");
        }
        else {
            if (year % 100 == 0 && year % 4 == 0) {
                printf("NO");
            }
        }
        if (year % 100 != 0 && year % 4 == 0) {
                printf("YES");
            }
    }
    else {
        printf("INVALID");
    }

    return 0;
}

// sai testcase 3 bỏ qua trường hợp không chia hết cho 4