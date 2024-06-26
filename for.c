#include<stdio.h>
int main(){
    for(int i= 0; i<=7; i++){
        printf("%d\n", i);
    }
int i, j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}

for(int i = 0; i<=10; i++){
    if(i==4){
        continue;
    }
    printf("%d\n", i);
}
}