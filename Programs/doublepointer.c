#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    int **ptr1 = &ptr;
    printf("a = %d\n",a);
    printf("&a = %d\n", &a);
    printf("ptr = %d\n",ptr);
    printf("ptr1 = %d\n",ptr1);
    printf("a = %d\n",*ptr);
    printf("ptr = %d\n",*ptr1);
    printf("ptr1 = %d\n",**ptr1);
    return 0;
}