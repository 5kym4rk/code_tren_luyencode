#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    if (n >= 2 && n <= 1000000) {
        int a[n];
        for (i = 0; i < n; i++){
            if (-1000000000 <= a[i] && a[i] <= 1000000000) {
                scanf("%d", &a[i]);
            }
        }
        
        //Tìm phần tử lớn nhất
        int firstmax = a[0];
        for (i = 1; i < n; i++) {
            if (a[i] >= firstmax) {
                firstmax = a[i];
            }
        }
        
        //Tìm phần tử lớn thứ 2
        int secondmax = a[0];
        int count = 0;
        for (i = 1; i < n; i++) {
            if (a[i] >= secondmax && a[i] < firstmax) {
                secondmax = a[i];
                count = 1;
            }
        }

        if (count == 0) {
            printf("NOT FOUND");
        }
        else {
            printf("%d", secondmax);
        }

    return 0;
    }

}

// không AC
// code của chatGPT cũng tương đối giống của mình mà
// mình không hiểu lý do tại sao code của mình không AC