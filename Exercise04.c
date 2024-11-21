#include<stdio.h>
int main(){
    float diemToan, diemVan, diemAnh, tongDiem, diemTrungBinh;
    printf("Ban hay nhap vao diem toan\n");
    scanf("%f", &diemToan);
    printf("Ban hay nhap vao diem van\n");
    scanf("%f", &diemVan);
    printf("Ban hay nhap vao diem anh\n");
    scanf("%f", &diemAnh);
    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem/3;
    printf("Tong diem la %.2f\n", tongDiem);
    printf("Diem trung binh la %.2f", diemTrungBinh);

    return 0;
}