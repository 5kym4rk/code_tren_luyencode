#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c, delta;

    scanf("%f " "%f " "%f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("WOW");
            }
            else {
                printf("NO");
            }
        }
        else {
            if (c == 0) {
                printf("0");
            }
            else {
                prinf("%.2f", -c/b);
            }
        }
    }
    else {
        if (b == 0) {
            if (c == 0) {
                printf("0")
            }
            else {
                printf("%.2f " "%.2f", - sqrt(-c/a), sqrt(-c/a));
            }
        }
        else {
            if (c == 0) {
                printf("%.2f " "%.2f", 0, -b/a);
            }
            else {

            }
        }
    }
}

// logic toán học của mình quá tệ