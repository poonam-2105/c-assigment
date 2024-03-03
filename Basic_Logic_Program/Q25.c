//Q25)=Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){

    float expense[50];
    float total_expense=0,averag_expense;

    //ASK EXPENSE FORM THE USERS 
    printf("Enter the expenses:");
    for(int i=0;i<=5;i++){
        printf("THE EXPENSE ARE:%d=",i,i+1);
        scanf("%f",&expense[i]);
        total_expense+=expense[i];

    }

    //CALCULATE THE AVERAGE OF THE EXPENSES:
    averag_expense=total_expense/5;

    //PRINTING HE RESULT..
    printf("THE TOTAL EXPENSE ARE:=%.2f\n",total_expense);
    printf("THE AVERAGE OF EXPENSE ARE:%.2f\n",averag_expense);
}