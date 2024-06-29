#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    /* 
    printf("A before swap: %d\n ", a);
    printf("B before swap: %d\n ", b);
    int temp = a + b;
    a = temp - a;
    b = temp - a;
    printf("A after swap: %d\n ", a);
    printf("B after swap: %d\n ", b);
    */
    printf("A before swap: %d\n ", a);
    printf("B before swap: %d\n ", b);
   a = a + b;
   b = a - b;
   a = a - b;
    printf("A after swap: %d\n ", a);
    printf("B after swap: %d\n ", b);
}