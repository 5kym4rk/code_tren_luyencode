#include <stdio.h>
#include <math.h>

void giai_phuong_trinh_bac_hai(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh co mot nghiem: x = %.2f\n", -c / b);
        }
        return;
    }
    
    float delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
    } else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

int main() {
    float a, b, c;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    
    giai_phuong_trinh_bac_hai(a, b, c);
    
    return 0;
}
