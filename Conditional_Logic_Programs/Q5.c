//Check Number Is Positive or Negative
#include<stdio.h>
int main(){

    int a;
    printf("enter the number:");
    scanf("%d",&a);

    if(a>0){
        printf("the number is positive:");
    }

    else if(a<0){
        printf("the number is not negative");
    }
    else{
        printf("the number is equale");
    }
}