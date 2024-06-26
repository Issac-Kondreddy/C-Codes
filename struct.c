#include<stdio.h>
#include<string.h>
struct person{
    char name[20];
    int age;
    char gender;
};
int main(){
    struct person p1;
    struct person p2;
    struct person p3 = {"bharadwaj", 20, 'M'};
    strcpy(p1.name, "issac");
    strcpy(p2.name, "Pranay");
    p1.age = 20;
    p2.age = 21;
    p1.gender = 'M';
    p2.gender = 'M';
    printf("Name of person 1 is %s\n", p1.name);
    printf("Name of person 2 is %s\n", p2.name);
    printf("Age of person 1 is %d\n", p1.age);
    printf("Age of person 2 is %d\n", p2.age);
    printf("Gender of person 1 is %c\n", p1.gender);
    printf("Gender of person 2 is %c\n", p2.gender);
    printf("Name of person 3 is %s\n", p3.name);
    printf("Age of person 3 is %d\n", p3.age);
    printf("Gender of person 3 is %c\n", p3.gender);
    //copying structs
    p3 = p1;
    printf("Name of person 3 is %s\n", p3.name);
    printf("Age of person 3 is %d\n", p3.age);
    printf("Gender of person 3 is %c\n", p3.gender);

    //modifying structs
    p3.age = 25;
    p3.gender = 'F';
    printf("Name of person 3 is %s\n", p3.name);
    printf("Age of person 3 is %d\n", p3.age);
    return 0;
}