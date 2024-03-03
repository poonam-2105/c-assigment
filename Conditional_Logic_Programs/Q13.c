//Q13)=WAP to find maximum number among 3 numbers using ternary 
//operator.

#include<stdio.h>
int main(){

    int max,num1,num2,num3;
    printf("Enter the number:");
    scanf("%d%d%d",&num1,&num2,&num3);
  /// using ternary operater>.
    max=(num1>num2)? ((num1>num2? num1:num2)):((num2>num3)? num2:num3);
    printf("The max number between %d ,%d, %d the max number is %d:\n",num1,num2,num3,max);
}