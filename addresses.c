#include<stdio.h>
int main(){
    int myage = 23;
    printf("Address of myage variable is %p\n", &myage);
    //&myage - is called as pointer - pointer basically stores the memory address of a variable as its value
    // to print pinter value we use %p as format specifier
    printf("My age is: %d", myage);

}