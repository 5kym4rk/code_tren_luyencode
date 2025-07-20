/*#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int s = 0;

    while (n / 10 >= 0) {
        s += 1;
    }

    printf("%d", s);

    return 0;
}
*/
// Code trên lỗi TLE :)))

#include <stdio.h>

int main() {
    int num, count = 0;

    // Nhập số từ bàn phím
    
    scanf("%d", &num);

    // Xử lý số âm
    if (num < 0) {
        num = -num;  // Chuyển số âm thành số dương để đếm chữ số
    }

    // Trường hợp số 0
    if (num == 0) {
        count = 1;  // Số 0 có một chữ số
    } else {
        // Đếm số chữ số
        while (num > 0) {
            num /= 10;  // Loại bỏ chữ số cuối cùng
            count++;     // Tăng biến đếm
        }
    }

    // Xuất kết quả
    printf("%d", count);

    return 0;
}