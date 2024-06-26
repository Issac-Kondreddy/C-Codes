#include<stdio.h>
int main(){
    //this is a comment
    /*
    This is a multi line comment
    forward slash and star
    */
   //variables
   int num = 10;
   float num1 = 10.5;
   char ch = 'A';
   /*
   To output the variables we should use 
   format specifiers. these are used along with printf() function
   to tell computer which type of data is variable storing
   it starts with % symbol followed by character
   */
    printf("%d\n", num);
    printf("%c\n",ch);
    printf("%f\n", num1);

    /*
    Combining text and variables 
    */
   printf("The number I want to print is %d\n", num);

   int number = 34;
   int mynumber = 43;
   printf("Number 1 : %d\n", number);
   printf("Number 2 : %d\n", mynumber);
   number = mynumber;
   printf("Number 1 : %d\n", number);


   //Declaring multiple variable in single line
   int a = 1, b= 2, c=3;
   printf("Sum of a = %d, b = %d, c= %d is %d\n", a,b,c,a+b+c);

   //area of rectangle
   float length = 2.5;
   float breadth = 3.5;
   float area = length * breadth;
   printf("The Area of Rectangle with length = %.2f and breadth = %.2f is %.2f", length, breadth, area);

 //constant value variables should be declared in CAPITALS
   const int mynum = 15;
   printf("The value of mynum is %d and it cant be changed in any case\n", mynum);

}