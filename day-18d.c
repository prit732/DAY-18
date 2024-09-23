#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the row and column size: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("array diagonal.\n");
     
    }

    int array[rows][cols];

  
    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }


    int sum = 0;
    for (int i = 0; i < rows; i++){
        sum += array[i][i]; 
    }

  
    printf(" sum Array: %d\n", sum);

}
