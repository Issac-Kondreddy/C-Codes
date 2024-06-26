#include<stdio.h>
int  main(){
    int i = 0;
    while(i<6){
        printf("%d: Hello World\n",i);
        i++;
    }
    printf("\n");
    int j = 1;
    while(j<7){
        if(j==5){
            break;
        }
        printf("%d: Hello World\n",j);
        j++;
    }
    int k = 1;
    do{
        printf("%d: Hello World\n", k);
        k++;
    }while(k<5);

int number = 12345;
int reverse = 0;
while(number>0){
    reverse = reverse * 10 + number%10;
    number /= 10;
}
printf("Reverse of the number is: %d\n", reverse);
}