//Write a program to make Simple calculator (to make addition,
//subtraction,multiplication, division and modulo)
#include<stdio.h>
void main()
{
    int a,b,result;
    printf("enter the number:");
    scanf("%d%d",&a,&b);
    
    //additon 
    result=a+b;
    printf("the additon of number is:%d\n",result);

    //subtraction..
    result=a-b;
    printf("the subtraction of element:%d\n",result);

    //..multiplication
    result=a*b;
    printf("the multiplication of number:%d\n",result);

    //mode
    result=a%b;
    printf("the mode of number:%d\n",result);

    //division
    result=a/b;
    printf("the division of number:%d\n",result);
}
