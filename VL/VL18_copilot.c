#include <stdio.h>
#include <string.h>

int main() {
    char n[1001]; // Mảng ký tự để lưu số nguyên lớn
    scanf("%s", n); // Đọc số nguyên dưới dạng chuỗi

    int len = strlen(n); // Độ dài của chuỗi
    int start = len - 1; // Bắt đầu từ chữ số cuối cùng

    // Bỏ qua các chữ số 0 ở cuối
    while (start >= 0 && n[start] == '0') {
        start--;
    }

    // In các chữ số theo thứ tự ngược lại
    for (int i = start; i >= 0; i--) {
        printf("%c", n[i]);
    }

    // Nếu tất cả các chữ số đều là 0, in ra 0
    if (start < 0) {
        printf("0");
    }

    return 0;
}