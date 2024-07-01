#include<stdio.h>
int maxofarray(int arr[], int length);
int minofarray(int arr[], int length);
int main(){
    int arr[5]={1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int max=maxofarray(arr, length);
    int min=minofarray(arr, length);
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    return 0;
}
int maxofarray(int arr[], int length){
    int max=arr[0];
    for(int i = 1;i<=length;i++){
        if(arr[i]>max){
            max=arr[i];
    }
    }
    return max;
}

int minofarray(int arr[], int length){
    int min=arr[0];
    for(int i = 1;i<=length;i++){
        if(arr[i]<min){
            min=arr[i];
    }
    }
    return min;
}