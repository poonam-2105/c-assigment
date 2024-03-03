//.Q11)=WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main(){

    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);
   
   //using ternary operater?:

       (number%2==0)?printf("The number is even:%d\n",number):printf("The number is odd:%d\n",number);

}