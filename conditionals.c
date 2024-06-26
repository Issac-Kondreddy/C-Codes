#include<stdio.h>
int main(){
    int age = 40;
    if(age>20){
        printf("You are elgible!!\n");
    }else{
        printf("You are not elgible!!\n");
    }


    //ternary operator
    int result = age>18?printf("Eligible!!"):printf("Not Eligible");
    printf("%d\n", result); 


    int day = 4;
    switch(day){
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
        default:
        printf("Invalid day\n");
    }
}