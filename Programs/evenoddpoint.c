#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int even_count = 0;
    int odd_count = 0;
    int *ptr = arr;
    for(int i = 0;i<10;i++){
        if(*ptr%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
        ptr++;
    }
    printf("Even numbers are %d\n",even_count);
    printf("Odd numbers are %d\n",odd_count);
}