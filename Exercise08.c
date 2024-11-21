#include<stdio.h>
int main(){
    int number, iNumber;
    printf("Hãy nhập vào số nguyên có 4 chữ số\t");
    scanf("%d", &number);
    iNumber =  0 - number;
    printf("Số nghịch đảo của số %d là %d", number, iNumber);

    return 0;
}