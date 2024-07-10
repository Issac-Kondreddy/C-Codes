#include<stdio.h>
/*
Array to a pointer - 
1. Array name is a constant pointer
2. Array name is a pointer to the first element of the array
*/
int main()
{
    int a[5] = {1,2,3,4,5};
    int *p = a;
    printf("%d\n",p);
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",*a);
    return 0;
}
