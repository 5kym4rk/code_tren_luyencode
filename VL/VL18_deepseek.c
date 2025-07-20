#include <stdio.h>
#include <string.h>

// Hàm đảo ngược chuỗi và loại bỏ số 0 ở đầu
void reverse_and_trim(char *str) {
    int len = strlen(str);
    // Đảo ngược chuỗi
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    // Tìm vị trí đầu tiên không phải số 0
    int start = 0;
    while (str[start] == '0' && start < len - 1) {
        start++;
    }
    // In từ vị trí start đến hết chuỗi
    for (int i = start; i < len; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char n[1001]; // Giới hạn n <= 10^1000 (cần 1001 ký tự)
    scanf("%s", n);
    reverse_and_trim(n);
    return 0;
}