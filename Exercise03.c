#include<stdio.h>
int main(){
    float banKinh, chuVi, dienTich;

    printf("Hay nhap vao ban kinh hinh tron\n");
    scanf("%f", &banKinh);
    chuVi = 2 * 3.14 * banKinh;
    dienTich = 3.14 * banKinh * banKinh;
    printf("Chu vi hinh tron co ban kinh %.2f la %.2f\n", banKinh, chuVi);
    printf("Dien tich hinh tron co ban kinh %.2f la %.2f\n", banKinh, dienTich);

    return 0;
}