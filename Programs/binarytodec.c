#include<stdio.h>
#include<math.h>
int main(){
    int binary;
    printf("Enter the binary number: ");
    scanf("%d",&binary);
    int decimal=0;
    int i = 0;
    while(binary>0){
        int rem=binary%10;
        decimal=decimal+(rem*pow(2,i));
        binary=binary/10;
        i = i +1;
    }
    printf("The decimal number is: %d\n",decimal);
    return 0;
}