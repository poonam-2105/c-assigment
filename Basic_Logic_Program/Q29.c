//Convert minutes into seconds and hours..
#include<stdio.h>
int main(){

    int houre,minute,second;
    // ENTER THE MINUTE....
    printf("Enter the minuter:");
    scanf("%d",&minute);

    houre=minute/60; //CONVERT MINUTE INTO HOURE.
    second=minute*60; //CONVERT MINUTE INTO SECOND. 
  printf("-----------------------------------\n"); 
    //PRINT THE RESULT.
    printf("MINUTE INTO HOURES:%d\n",houre);
    printf("MINUTE INTO SECOND:%d\n",second);
}