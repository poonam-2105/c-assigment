// Q13)=
// .calculate the Factorial of a Given Number using while loop
#include<stdio.h>
#include<math.h>
int main(){
          int num,factorial=1;

          printf("Enter the number:");
          scanf("%d",&num);

        //calculate the numbewrs:
        if(num<0){
            printf("number is invalide:");
        }
        else{
            int i=1;
            while(i<=num){
                factorial*=i;
                i++;
            }
            printf("the factorial of numbers is:%d=%d",num,factorial);
        }
}