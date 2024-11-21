#include<stdio.h>
int main(){
    int number, num1, num2, num3, num4, sum;
    printf("Hay nhap vào 1 số nguyên có 4 chữ sô\t");
    scanf("%d",&number);
    num1= number/1000;
    num2= (number/100) % 10;
    num3= (number/10) % 10;
    num4= number % 10;
    
    sum = num1 + num2 + num3 + num4;
    printf("Tổng của các chữ số là %d", sum);

    return 0;
}