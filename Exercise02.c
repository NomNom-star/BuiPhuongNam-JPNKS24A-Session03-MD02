#include<stdio.h>
int main(){
    float doC, doF;
    printf("Xin moi nhap vao do C\n");
    scanf("%.2f",&doC);
    doF = doC * 9/5 + 32;
    printf("Do F la %.2f", doF);

    return 0;
}
