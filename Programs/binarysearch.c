#include<stdio.h>
int binarysearch(int arr[], int target, int start, int end);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int target = 5;
    int start = 0;
    int end = 7;
    int result = binarysearch(arr, target, start, end);
    printf("%d\n", result);
    return 0;
}

int binarysearch(int arr[], int target, int start, int end){
    int mid = start + (end-start)/2;
    if(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            return binarysearch(arr, target, mid+1, end);
        }
        else{
            return binarysearch(arr, target, start, end-1);
        }
    }
    return -1;

}