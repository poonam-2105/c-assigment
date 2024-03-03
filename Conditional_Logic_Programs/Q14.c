//Q14)=WAP to find the largest of three numbers.
#include<stdio.h>
int main(){

    int num1,num2,num3;//declaring 3 varialbels..
    printf("Enter the number:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>=num2 && num1>=num3){//conditons of compering 3 numbers..
        printf("The largest number is num1=:%d\n",num1);
    }
    else if(num2>=-num1 && num2>=num3){
        printf("The largest number is num2=:%d\n",num2);
    }
    else{
        printf("The largest number is num3=:%d\n",num3);
    }
}//end of code..