//Q10)=WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){

    int number;
    printf("Enter the value:");
    scanf("%d",&number);

    //make condition to check number is in negative or postive or zero...
    if(number>0){
        printf("The number is in positive:\n");
    }
    else if(number<0){
        printf("The number is in negative:\n");
    }
    else if(number==0){
        printf("The number is in zero:\n");
    }
    else{
        printf("error:\n");
    }
}