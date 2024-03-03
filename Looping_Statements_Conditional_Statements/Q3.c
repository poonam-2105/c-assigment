//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers
#include<stdio.h>
int main(){

    int num,count_even=0,count_odd=0,sum_even=0,sum_odd=0;

    printf("Enter the numbers:");
    for(int i=0;i<10;i++){
        printf("The 10 numbers:%d",i+1);
        scanf("%d",&num);


        //count even and odd number and sum of even and odd;
        if(num%2==0){
            count_even++;
            sum_even+=num;
        }
        else{
            count_odd++;
            sum_odd+=num;
        }
    }
    printf("The total count of even is:%d\n",count_even);
    printf("The total count of odd number is:%d\n",count_odd);
    printf("The total sum of even number is:%d\n",sum_even);
    printf("The total sum of odd number is:%d\n",sum_odd);
}