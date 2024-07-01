#include <stdio.h>

void reversearray(int array[], int n); // Function prototype

int main() {
    int array[10], i, n;
    
    printf("Enter the number of elements in the array (max 10)\n");
    scanf("%d", &n);
    
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    reversearray(array, n); // Call the function to reverse the array
    
    return 0;
}

void reversearray(int array[], int n) {
    int i = 0;
    int j = n - 1;
    
    while (i < j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    
    printf("Reversed array:\n");
    for (int k = 0; k < n; k++) {
        printf("%d\n", array[k]);
    }
}
