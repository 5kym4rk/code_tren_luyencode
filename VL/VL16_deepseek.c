#include <stdio.h>
#include <stdlib.h> // Hàm abs()

// Hàm tính UCLN bằng thuật toán Euclid
int ucln(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Lấy giá trị tuyệt đối
    int abs_a = abs(a);
    int abs_b = abs(b);

    // Tính UCLN và BCNN
    int gcd = ucln(abs_a, abs_b);
    int lcm = (abs_a / gcd) * abs_b; // Tránh tràn số bằng cách chia trước

    printf("%d", lcm);
    return 0;
}


// Công thức tính BCNN
// BCNN(a, b) = |a * b| / UCLN(a, b)