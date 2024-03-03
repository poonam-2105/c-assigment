//Q19_3)= make this  pattern
//           *
//        *  *  *
//     *  *  *  *   *
//   *  *   *   *    *   *
// *  *   *   *   *   *    *
#include<stdio.h>
int main(){

    int row,col ;
    int i=5;
    for(row=0;row<i;row++){
        for(int space=0;space<i-row-1;space++){
            printf("  ");
        }
        for(col=0;col<(row*2)+1;col++){
            printf("* ");
        }
        printf("\n");
    }
}