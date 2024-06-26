#include<stdio.h>
int main(){
    int array1[] = {25, 75, 90, 100};
    for(int i=0; i<4;i++){
        printf("element at index %d is %d\n",i , array1[i]);
    }
    array1[2] = 34;
    printf("After modification\n");
    for(int i=0; i<4;i++){
        printf("element at index %d is %d\n",i , array1[i]);
        }

    int arr2[10];
    printf("%d\n", sizeof(array1)); //size of operator returns the size of a type in bytes
    //int size is 4 and we have 4 elements !! 4*4 = 16
    //to find number of elements in array
    int length = sizeof(array1)/sizeof(array1[0]);
    printf("%d\n", length);    

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length1 = sizeof(ages)/sizeof(ages[0]);
    int sum = 0;
    for(int i = 0;i<length1;i++){
        sum += ages[i];
    }
    printf("%d\n", sum);

    //Multi Dimesionality Arrays
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j = 0; j<3;j++){
            printf("The Element at i =%d and j = %d is %d\n ", i,j, matrix[i][j]);
        }
    }
}