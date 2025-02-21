#include <stdio.h>
int main() {
    // 1D Array
    int arr[5] = {150, 250, 350, 450, 550};
    
    printf("1D Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");  

    // 2D Array
    int matrix[3][3] = { {23, 21, 32}, {41, 15, 36}, {37, 68, 59} };
    int sum = 0;

    printf("2D Array (3x3 Matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); 
            sum += matrix[i][j];         
        }
        printf("\n"); 
    }

    printf("\nSum of all elements in the 2D array is: %d\n", sum);

    return 0;
}










