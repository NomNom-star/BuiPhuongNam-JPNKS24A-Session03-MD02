#include<stdio.h>
int main(){
    int number, num1, num2, num3, num4;
    printf("Hay nhap vào 1 số nguyên có 4 chữ sô\t");
    scanf("%d",&number);
    num1= number/1000;
    num2= (number/100) % 10;
    num3= (number/10) % 10;
    num4= number % 10;
    
    printf("Số nghịch đảo số %d là %d%d%d%d", number, num4, num3, num2, num1 );


    return 0;
}
