#include<stdio.h>
int main(){
    int x = 5; // x is variable with 5 value lets say stored at base address of 1000
    int *ptr; // ptr is pointer but also a variable stored at base addres 2000
    ptr = &x; //this line indicated that 1000(address of x) is stored at 2000(ptr)
    printf("Value of x: %d\n", x); // prints 5
    printf("Address of x: %p\n", &x); // prints 1000
    printf("Value of ptr: %p\n", ptr); // prints 1000
    printf("Address of ptr: %p\n", &ptr); // prints 2000
    printf("Value at address stored in ptr: %d\n", *ptr); // prints
    // to write in a single line
    int y = 10, *ptr1 = &y;
    printf("Value of y: %d\n", y);
    printf("Address of y: %p\n", &y);
    printf("Value of ptr1: %p\n", ptr1);
    printf("Address of ptr1: %p\n", &ptr1);
    printf("Value at address stored in ptr1: %d\n", *ptr1);
    
    //dereference operator
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Value at address stored in p: %d\n", *p);
    //changing value through pointer
    *p = 20;
    printf("Value of a: %d\n", *p);

    //pointers and arrays
    int arr[5] = {1, 2, 3, 4};
    int *ptr2 = &arr;
    for(int i = 0;i<4;i++){
        printf("Address of each value stored is %p\n", &arr[i]);
    }
/*

in C, the name of an array, is actually a 
pointer to the first element of the array.
*/
int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);

// Get the memory address of the first array element
printf("%p\n", &myNumbers[0]);

printf("The first element of array is %d\n", *myNumbers);
printf("The second element of array is %d\n", *(myNumbers+1));
 printf("The third element of array is %d\n", *(myNumbers+2));   

int *ptrr = myNumbers;
for(int i = 0;i<4;i++){
    printf("Value at address stored in ptr2 is %d\n", *(ptrr+i));
}

}