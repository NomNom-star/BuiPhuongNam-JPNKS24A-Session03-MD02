#include<stdio.h>
int main(){
    float doDaiCanh, chieuCao, dienTich;
    printf("Hay nhap vao do dai canh cua tam giac\n");
    scanf("%f", &doDaiCanh);
    printf("Hay nhap vao chieu cao cua tam giac\n");
    scanf("%f", &chieuCao);
    dienTich = doDaiCanh * chieuCao / 2;
    printf("Dien tich cua tam giac la %.2f", dienTich);


    return 0;
}