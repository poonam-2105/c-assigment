//Q14)= Perform 2D matrix array
#include <stdio.h>

#define row 3
#define col 3

void addMatrix(int mat1[][col], int mat2[][col], int result[][col]) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrix(int mat1[][col], int mat2[][col], int result[][col]) {
    int i, j, k;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            result[i][j] = 0;
            for (k = 0; k < col; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][col]) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col ; j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[row][col] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[row][col];

    printf("Matrix 1:\n");
    displayMatrix(matrix1);
    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nAddition of matrices:\n");
    addMatrix(matrix1, matrix2, result);
    displayMatrix(result);

    printf("\nMultiplication of matrices:\n");
    multiplyMatrix(matrix1, matrix2, result);
    displayMatrix(result);

    return 0;
}
