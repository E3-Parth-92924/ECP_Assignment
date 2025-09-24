//Que6
#include <stdio.h>
#include <stdlib.h>

int** allocate_matrix(int rows, int cols)
 {
    int **mat = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
        mat[i] = malloc(cols * sizeof(int));
    return mat;
}

void free_matrix(int **mat, int rows)
 {
    for (int i = 0; i < rows; i++)
        free(mat[i]);
    free(mat);
}

int main() 
{
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int **mat = allocate_matrix(rows, cols);

    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }

    free_matrix(mat, rows);
    return 0;
}

