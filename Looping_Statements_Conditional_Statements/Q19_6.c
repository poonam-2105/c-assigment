// Q19)=. Patterns:
// A
// AB
// ABC
// ABCD
// ABCD
#include<stdio.h>
int main(){

    int row,col;
    for(row=0;row<6;row++){
        for(col=0;col<row;col++){
            printf("%c",'A'+col);
        }
        printf("\n");
    }
}