#include<stdio.h>

// void function1();
// void function2();
// // Define function1
// void function1() {
//     printf("I am function 1 called from main()\n");
//     function2(); // Call function2
// }
// // Define function2
// void function2() {
//     printf("I am function 2 called from function 1\n");
// }

int sum(int x, int y){
    return x+y;
}

void greet(char name[])
{
    printf("Hello %s\n", name);
}
void info(char name[], int age){
    printf("Hello My name is %s and I am %d years old\n", name, age);
}

int sumarray(int numbers[], int length){
    int sum = 0;
    for(int i=0;i<length;i++){
        sum += numbers[i];
    }
    return sum;
}

int main() {
    // function1(); // Call function1
    printf("%d\n", sum(3,5));
    greet("Rahul");
    info("Rahul", 25);
    int numbers[] = {1,2,3,4,5};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    printf("Sum of array is %d\n", sumarray(numbers, length));
    return 0; // End of main function
}

/*
main is a function, it is a predefined function
*/
