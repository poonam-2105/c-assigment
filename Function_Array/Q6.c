//Q6)= WAP to make addition, Subtraction and multiplication oftwo matrix
// using2-D Array
#include<stdio.h>
#define row 3
#define col 3

int i,j;
void additions(int mat1[row][col],int mat2[row][col],int result[row][col]){
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

}
void multiply(int mat1[row][col],int mat2[row][col],int result[][col]){
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            for (int k = 0; k <col; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}    

void subtraction(int mat1[row][col],int mat2[row][col],int result[row][col]){
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            result[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
}
void displaye(int mat[row][col]){
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           printf("%d",mat[i][j]);
        }
        printf("\n");
    }

}    




int main(){
    
    int matrix1[row][col] = {{1,1,1},{1,1,1},{1,1,1}};
    int matrix2[row][col] = {{1,1,1},{1,1,1},{1,1,1}};
    int result[row][col];

    printf("matrixs:1\n");
    displaye(matrix1);

    printf("matrixs:2\n");
    displaye(matrix2);
printf("------------------------------------------------------------\n");
    printf("additions:\n");
    additions(matrix1,matrix2,result);
    displaye(result);
    printf("\n");

    printf("subtraction:\n");
    subtraction(matrix1,matrix2,result);
    displaye(result);
    printf("\n");

    printf("multiplication:\n");
    multiply(matrix1,matrix2,result);
    displaye(result);
    printf("\n");

}