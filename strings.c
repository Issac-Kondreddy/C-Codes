#include<stdio.h>
#include<string.h>
int main(){
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);
    printf("%c\n", greetings[2]);
    int length = sizeof(greetings)/sizeof(greetings[0]);
    printf("Length of the string: %d\n", length);
    greetings[11] = '?';
    printf("%s\n", greetings);
    for(int i = 0;i<length;i++){
        printf("%c\n", greetings[i]);
    }

    char string1[] = "We are called as \" Monsters \" from North";
    printf("%s\n", string1);
    //to  get the length of string we can use strlen()
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d\n", strlen(alphabet));   // 26
printf("%d\n", sizeof(alphabet));   // 27

//to combine two strings we will use strcat()
char str1[20] = "Hello";
char str2[] = "World";
strcat(str1, str2);
printf("%s\n", str1);  //HelloWorld
//to copy strings
char str3[30] = "Hello World";
char str4[40];
strcpy(str4,str3);
printf("%s\n",str4);
//to compare strings strcmp()
printf("%d\n", strcmp(str3, str4)); //o if equal
printf("%d\n",strcmp(str1,str2)); //other value if not equal
}   