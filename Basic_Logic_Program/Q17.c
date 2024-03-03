//Calculate person’s insurance premium based on salary
#include<stdio.h>
void main(){

    int salary;
    float pre;

    printf("the salary of employ:");
    scanf("%d",&salary);

    if (salary<10000){
        pre=salary*0.02;}

        else if(salary>=10000){
            pre=salary*0.05;
        }

        else if(salary<=3000){
            pre=salary*0.10;
        }

        else {
            pre=salary*0.1;
        }

    printf("the salary of employe is%d\n",salary);
    printf("the prmimum of employe is:%f\n",pre);
}