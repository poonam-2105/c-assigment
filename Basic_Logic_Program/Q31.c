// Q31)=Convert kilometers into meters
#include<stdio.h>
int main(){

    float kilometer,meter;
    //TAKE INPUT  FROM USER AS KILOMETER;
    printf("enter the kilometer:");
    scanf("%f",&kilometer);


    //CONVERT THE KILOMETER INTO METER;
    meter=kilometer*1000;

    //PRINT THE RESUT ;
    printf("METER IS=%.2f",meter);
}