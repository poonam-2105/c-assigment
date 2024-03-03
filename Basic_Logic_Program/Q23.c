//Q23)=WAP to calculate swap 2 numbers with using of multiplication and
//division
#include<stdio.h>
int main(){

    //ASK VALUE FROM USER TO SWAP
    int a,b;
    printf("Enter the vale for A and B:=");
    scanf("%d%d",&a,&b);

    //PRINT THE VALUES BEFORE THE SWAPING....
    printf("The value of a after swaping:%d\n",a);
    printf("The value of b after swaping is:%d\n",b);

    a= a  *  b;//stores the value of a and b both..
    b= a  /  b;//divides a form b and give the  value of  a to b...
    a= b  /  a;//divide b for a and give the value of b to a...

    //PRINT THE VALUES AFTER THE SWAPING .....
    printf("The value of a after swaping:%d\n",a);
    printf("The value of b after swaping is:%d\n",b);
    

}