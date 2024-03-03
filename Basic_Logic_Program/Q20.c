//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary

#include<stdio.h>

int main(){

 float  monthly_salary,insurance_premium,lone_installment,remaining_salary;

    printf("the monthly salary of employ:");
    scanf("%f",&monthly_salary);

    //calaculate insurance premium of salary(%10)
    insurance_premium= monthly_salary*0.10;
    //remaining salary 
    remaining_salary=monthly_salary-insurance_premium;
    //calaculate lone installment (%10)
    lone_installment=remaining_salary*0.10;
    //remainimg salary
    remaining_salary-=lone_installment;


    printf("the salary of employe:=%f\n",monthly_salary);
    printf("the insurance premium:=%f\n",insurance_premium);
    printf("the loan installment:=%f\n",lone_installment);
    printf("the remaineing amount:=%f\n",remaining_salary);

    }