#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    int year;
    scanf("%d", &year);

    int days;

    if (month < 1 || month > 12 || year <= 0) {
        printf("INVALID");
    }
    else {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days = 31;
                printf("%d", days);
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                printf("%d", days);
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    days = 29;
                    printf("%d", days);
                }
                else {
                    days = 28;
                    printf("%d", days);
                }
                break;
        }
    }

    return 0;
}