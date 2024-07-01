#include<stdio.h>
int sumn(int n);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Sum of %d natural numbers is %d",a,sumn(a));
}

int sumn(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return n + sumn(n-1);
}