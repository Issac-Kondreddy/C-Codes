#include<stdio.h>

void swap(char *x, char *y){
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutate(char *str, int start, int end){
    if(start==end){
        printf("%s\n", str);
    }
    else{
        for(int i=start; i<=end; i++){
            swap(&str[start], &str[i]);
            permutate(str, start+1, end);
            swap(&str[start], &str[i]);
            }
    }
}


int main(){
    char str[] = "ABC";
    permutate(str, 0, 2);
    return 0;

}