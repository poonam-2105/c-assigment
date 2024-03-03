// Write a C program to accept two integers and check whether they are equal
//or not
#include<stdio.h>
int main(){

    int number1,number2;

    printf("the first number is:");
    scanf("%d",&number1);

    printf("the second number:");
    scanf("%d",&number2);

    if(number1==number2){
        printf("the number are equal to each other");
    }
    else{
        printf("the number is not equal");
    }
}