#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
int add(int a, int b);
int difference(int a, int b);
int product(int a, int b);
float quotient(int a, int b);
int power(int base, int exp);
double square_root(int a);
int factorial(int a);
int modulus(int a, int b);

// Function definitions
int add(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

float quotient(int a, int b) {
    if (b == 0) {
        printf("Can't be divided by 0\n");
        return 0;
    } else {
        return (float)a / b;
    }
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Can't be divided by 0\n");
        return 0;
    } else {
        return a % b;
    }
}

int power(int base, int exp) {
    return pow(base, exp);
}

double square_root(int a) {
    return sqrt(a);
}

int factorial(int a) {
    if (a == 0) {
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}

int main() {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the operation you want to perform (1 for add, 2 for difference, 3 for product, 4 for quotient, 5 for power, 6 for square root, 7 for factorial, 8 for modulus): ");
    scanf("%d", &c);
    
    switch (c) {
        case 1:
            printf("The sum is: %d\n", add(a, b));
            break;
        case 2:
            printf("The difference is: %d\n", difference(a, b));
            break;
        case 3:
            printf("The product is: %d\n", product(a, b));
            break;
        case 4:
            printf("The quotient is: %.2f\n", quotient(a, b));
            break;
        case 5:
            printf("The power is: %d\n", power(a, b));
            break;
        case 6:
            printf("The square root of %d is: %.2f\n", a, square_root(a));
            break;
        case 7:
            printf("The factorial of %d is: %d\n", a, factorial(a));
            break;
        case 8:
            printf("The modulus is: %d\n", modulus(a, b));
            break;
        default:
            printf("Invalid operation\n");
            break;
    }
    
    return 0;
}
