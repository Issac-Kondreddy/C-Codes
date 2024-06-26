#include<stdio.h>
#include<stdlib.h>
int main(){
    /*
    static memory allocation - Compile time memory allocation
    array is allocated with 80 bytes of memory (4 bytes of each int) if 
    only 10 are filled remianing 40 bytes will be waste
    */
    int array[20];
    printf("%d\n", sizeof(array));
    /*
    Dynamic Memory Allocation - Run time Memory Allocation 
    we use malloc(size) and calloc(amount, size)
    malloc - may lead to insufficeincy becuase sometimes data is less or more
    calloc takes two args amount means data inserting, size of each data
    dynamic memory only deals with ptr* and cant be assigned to variables
    */
   int *ptr1, *ptr2;
   printf("%d\n",malloc(sizeof(*ptr1)));
   printf("%d\n", calloc(1, sizeof(*ptr2)));

   int *students;
int numStudents = 12;
students = calloc(numStudents, sizeof(*students));
printf("%d\n", numStudents * sizeof(*students)); 


// Allocate memory
int *ptr;
ptr = calloc(4, sizeof(*ptr));

// Write to the memory
*ptr = 2;
ptr[1] = 4;
ptr[2] = 6;

// Read from the memory
printf("%d\n", *ptr);
printf("%d %d %d", ptr[1], ptr[2], ptr[3]);
}