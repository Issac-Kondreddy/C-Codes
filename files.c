#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("file.txt","a");
    fprintf(ptr, "This is written using append");


    //to read a file
    FILE *ptr2;
    ptr2 = fopen('file.text','r');
    char mystring[150];
    fgets(mystring,150,ptr2);
    while(fgets(mystring, 100, ptr2)) {
  printf("%s", mystring);
}
}