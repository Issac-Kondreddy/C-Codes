#include<stdio.h>
int evenodd(int n);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = evenodd(num);
    switch (result)
    {
    case 1:
    printf("Even");
        break;

    case -1:
    printf("Odd");
    break;

    default:
        break;
    }
    return 0;
}
int evenodd(int num){
    if(num%2==0){
        return 1;
    }
    return -1;
}