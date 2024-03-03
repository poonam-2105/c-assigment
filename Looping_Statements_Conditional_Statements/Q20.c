// WAP program to print below output using for loop
// 01 02 03 04 05 06 07 08 09 10
// 11 12 13 14 15 16 17 18 19 20
// ..............
// ..............
// 41 42 43 44 45 46 47 48 49 50
#include<stdio.h>
int main(){

    int num=1;
    int row,col;
    for(row=0;row<5;row++){
        for(col=0;col<10;col++){
            if(num<10)
                printf("0%d ",num);
            
            else
                printf("%d ",num);
                num++;
            
        }
        printf("\n");
    }
}