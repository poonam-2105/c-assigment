//Q17)=Write a C program to check whether
// a triangle can be formed with the given
//values for the angles.
#include<stdio.h>
int main(){
    
    //ASK THE USER TO ENTER THE THREE ANGLE TO MAKE TRIANGLE..
    int angle1,angle2,angle3;
    printf("Enter the three angles:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);

    //CHECK SUM OF THREE GIVEN ANGLES IS ==180 (DECGREE)..
    if ( angle1+angle2+angle3==180){
        printf("THE THREE ANGLE CAN MAKE A TRIANGLE:\n");
    } 
    else{
        printf("THE THREE ANGLE CAN NOT MAKE A TRIANGLE:/n");
    }
}