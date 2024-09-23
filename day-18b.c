#include <stdio.h>

int main() {
    int rows, cols;
    float sum = 0;

    
    printf("Enter the row size: ");
    scanf("%d", &rows);
    printf("Enter the array column size: ");
    scanf("%d", &cols);

   
    int array[rows][cols];

    
    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j]; 
        }
    }

 
    float average = sum / (rows * cols);

    
    printf("Average of Array: %.2f\n", average);

   
}
