#include<stdio.h>
int main(){
    //to get user input use scanf
    // //to get user output use printf
    // int number;
    // printf("Enter a number: \n");
    // scanf("%d", &number);
    // printf("You entered: %d\n",number);

    // //multiple inputs
    // int mynum;
    // char mychar;
    // printf("Enter a number and a character: \n");
    // scanf("%d %c", &mynum, &mychar);
    // printf("You entered %d and %c", mynum, mychar);

    // //taking string as input
    // char firstname[20];
    // char lastname[20];
    // printf("Enter your First name: ");
    // scanf("%s", firstname);
    // printf("Enter your Last name: ");
    // scanf("%s", lastname);
    // printf("Your name is %s %s\n", firstname, lastname);
    // printf("");
    //scanf cant take more than one word5! and use fgets for strings instead of scanf
    char fullName[20];
    printf("Enter your name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);


}