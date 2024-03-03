//24.Accept 5 employees name and salary and count average and total 
//salary
#include<stdio.h>
int main(){

    float salarys[5];
    char name[5][50];
    float average_salary;
    float total_salary;
    
    //ASK THE USER THE DETAILS FO 5 EMPLOYEES;
    printf("Enter the detail of 5 employes:\n");
    for(int i=0;i<5;i++){
        printf("THE NAME OF THE EMPLOYES IS:%d=",i,i+1);
        scanf("%s",name[i]);
        printf("THE SALARY OF THE EMPLOYES:",i+1);
        scanf("%f",&salarys[i]);
        total_salary+=salarys[i];
    }
     
     printf("-------------------------------------------\n");
    //CALACULATE THE AVERAGE OF THE SALARY..
    average_salary=total_salary/5;

    //..PRINT THE RESULT...
    printf("TOTAL SALARY OF ALL EMPLOYES IS:%f\n",total_salary);
    printf("THE AVERAGE SALARY OF EMPLOYES IS :%f\n",average_salary);


}