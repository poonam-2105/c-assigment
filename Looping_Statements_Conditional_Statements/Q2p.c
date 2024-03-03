//WAP to accept 5 numbers from user and display all numbers.
#include<stdio.h>
int main(){
    //ask the user 5 number ;
    int A[5];
    for(int i=0;i<5;i++){
        printf("enter the number:");
        scanf("%d",&A[i]);
    }
    //print the result
    for(int i=0;i<5;i++){
        printf("NUMBERS ARE:%d\n",A[i]);
    }
}