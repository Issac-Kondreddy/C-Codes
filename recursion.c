/*
Recursion is the technique of making a function call itself. 
This technique provides a way to break complicated problems
 down into simple problems which are easier to solve.
*/

#include<stdio.h>
int factorial(int n);

int main(){
    int num;
    printf("Enter the number for factorial\n: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
}

int factorial(int num){
    if(num==0){
        return 1;
    }
    if(num==1){
        return num;
    }else{
        return num * factorial(num-1);
    }
}