//Q19)=.Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
// Unit . Charge/unit
//. upto 350 . @1.20
//. 350 and above but less than 600 . @1.50
//. 600 and above but less than 800 . @1.80
//. 800 and above . @2.00
//[Q=20,21,22,23,24,25,26,27,28,29]
#include<stdio.h>
int main(){

    //ASK THE USER TO ENTER THE CUSTOMER NAME UNIS AND CHARGES..TO PER UNTI
    int unit,customer_id;
    char customer_name[100];
    float charges_per_unit,total_amount;
    
    //ENTER THE CUTOMER ID..
    printf("Enter the cutomer id:");
    scanf("%d",&customer_id);
    
    //ENTER THE CUTOMWER NAME..
    printf("Enter the cutomer name:");
    scanf("%s",&customer_name);

    //ENTER UNIT COUSUMED
    printf("Entet the unit cousmend:");
    scanf("%d",&unit);

    //CALCUALTE TOTAL AMOUTN AS PER UNIT...
    if(unit<=350){
        charges_per_unit=1.20;
    }
    else if(unit>=350 && unit<=600){
        charges_per_unit=1.50;
    }
    else if(unit>=600 && unit<=800){
        charges_per_unit=1.80;
    }
    else if(unit>=800){
        charges_per_unit=2.00;
    }

    //CALCULATE THE TOTAL AMOUNT...
    total_amount=unit*charges_per_unit;
     printf("--------------------------------------------\n");
    //PRINT THE ALL DETAILS AND BILL OF CUSTOMER..
    printf("THE CUTOMER ID IS:%d\n",customer_id);
    printf("NAME OF THE CUSTOMER IS:%s\n",customer_name);
    printf("UNIT CONSUMED:%d\n",unit);
    printf("CHARRGES PER UNIT:%f\n",charges_per_unit);
    printf("TOTAL AMOUNT IS:%f\n",total_amount);

}