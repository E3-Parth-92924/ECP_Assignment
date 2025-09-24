//Que3
#include <stdio.h>

void read_matrix(int rows, int cols, int a[rows][cols])
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
 {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
}

int row_sum(int cols, int a[][cols], int r)
 {
    int sum = 0;
    for (int j = 0; j < cols; j++)
        sum += a[r][j];
    return sum;
}

int col_sum(int rows, int cols, int a[rows][cols], int c)
 {
    int sum = 0;
    for (int i = 0; i < rows; i++)
        sum += a[i][c];
    return sum;
}

int main()
 {
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];
    read_matrix(rows, cols, A);

    int r, c;
    printf("Enter row index (0-%d): ", rows-1);
    scanf("%d", &r);
    printf("Sum of row %d = %d\n", r, row_sum(cols, A, r));

    printf("Enter col index (0-%d): ", cols-1);
    scanf("%d", &c);
    printf("Sum of col %d = %d\n", c, col_sum(rows, cols, A, c));

    return 0;
}

