#include<stdio.h>
int main(){
    int num1;
    int num2;
    char operator;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("Enter operator:");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
        printf("%d+%d=%d",num1,num2,num1+num2);
        break;
        case '-':
        printf("%d-%d=%d",num1,num2,num1-num2);
        break;
        case '*':
        printf("%d*%d=%d",num1,num2,num1*num2);
        break;
        case '/':
        printf("%d/%d=%d",num1,num2,num1/num2);
        break;
        default:
        printf("Invalid operator");
        break;
        }
        return 0;
    
}