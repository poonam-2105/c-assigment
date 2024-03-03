//Q16)= .Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){

    int sum=0,naturam_number,i=1;
    printf("Entet the positive inteager:");
    scanf("%d",&naturam_number);


    //take a input:
    if(naturam_number<0){
        printf("The number is negative inteager:");
    }
    else{
        while(i<=naturam_number){
            sum+=i;
            i++;
        }
        printf("The  result is:%d=%d",naturam_number,sum);
    }

}