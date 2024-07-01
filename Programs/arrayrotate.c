/*
Write a program to rotate array from left
*/
#include<stdio.h>
int main(){
    int array[5] = {1,2,3,4,5};
    int length = 5;
    int rotate_left = 2;
    int i;
    for(i=0;i<rotate_left;i++){
        int temp = array[0];
        for(int j = 0;j<=length-1;j++){
            array[j] = array[j+1];
            }
            array[length-1] = temp;
        }
        for(i=0;i<length;i++){
            printf("%d ",array[i]);
            }
            return 0;
}