//Q19_4)= make pattern
// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *
#include<stdio.h>
int main(){

    int row,col;
    for(row=1;row<=6;row++){
        for(col=0;col<row;col++){
            printf("* ");
        }
        printf("\n");
    }

    for(row=6-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
}