#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    int sum = num2 + num1;
    printf("Sum of num1 %d and num2 is %d : %d\n",num1, num2, sum);
    return 0;
}