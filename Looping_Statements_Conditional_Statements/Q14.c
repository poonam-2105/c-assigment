//Q14)=.Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
int main(){
    int num,factorial=1;


        //accept 5 numbesr from the user:
        printf("Enter 5 numbes:");
        for(int j=0;j<5;j++){
        printf("Enter the numbers%d:",j+1);
        scanf("%d",&num);
       }
    //  calculate the fatorial of the givwn number:
        if(num<0){
            printf("invalid number:");
        }
        else{
            int i=1;
            while(i<=num){
                factorial*=i;
                i++;
            }
            printf("The factoriaof the given number is:%d=%d",num,factorial);

        }

}