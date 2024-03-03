//Q15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main(){

    int sum=0,num;
    int count=1;
    
    //accept 10 numbers from the users..
    printf("Enter the 10 numbers:");

        // calculate the sum to given numbes
        
    while(count<=10){
            printf("Enter the count:%d=",count);
            scanf("%d",&num);
            sum+=num;
            count++;
            
        }
        printf("------------------------------------------\n");
        printf("The result is:%d",sum);

}