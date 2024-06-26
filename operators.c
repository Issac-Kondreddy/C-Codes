//arthimetic Operators
#include<stdio.h>
int main(){
    int num1 = 40;
    int num2 = 50;
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction:  %d\n", num1-num2);
    printf("Multplication %d\n", num1*num2);
    printf("Division: %d\n", num1/num2);
    printf("Modulus: %d\n", num1%num2);
    num1++;
    printf("Increment: %d\n",num1);
    num2--;
    printf("Decrement: %d\n",num2);

    //Assignemt Operators
    int x = 5;
    x += 5;
    printf("%d\n", x);
    x -= 3;
    printf("%d\n", x);
    x *= 2;
    printf("%d\n", x);
    x /= 2;
    printf("%d\n", x);
    x %= 6;
    printf("%d\n", x);
    x &= 0;//and
    printf("%d\n", x);
    x |= 5; //or
    printf("%d\n", x);
    x ^= 3; //XOR
    printf("%d\n", x);
    x >>= 1; //right shift
    printf("%d\n", x);
    x <<= 2; //left shift
    printf("%d\n", x);
    

    //Comparison Operators
    int a = 5;
    int b = 10;
    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a >= b);
    printf("%d\n", a <= b);
    printf("%d\n", a> b);
    printf("%d\n", a < b);
    
}