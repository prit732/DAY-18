#include <stdio.h>

int main() {
    int rows, cols;
    
  
    printf("Enter the  row size: ");
    scanf("%d", &rows);
    printf("Enter column size: ");
    scanf("%d", &cols);
     
    int a[rows][cols], b[rows][cols], c[rows][cols];
    

    printf("Enter array A's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
   
    printf("Enter array B elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
  
    printf("Array C is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
   
}
