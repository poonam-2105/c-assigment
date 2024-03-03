//Q30)=If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-
#include<stdio.h>
int main(){

    int total_amount,bill_amount;

    // Accepetting bill amount from user
    printf("enter the bill amount:");
    scanf("%d",&bill_amount);

    // appling sucharges to bill amount
    if( bill_amount>=800 )
    {
        total_amount=bill_amount+(bill_amount*0.18);   //appling surcharges
        printf("the total amount is:%d",total_amount);
    }
    else{
        total_amount=bill_amount;
        printf("the total amount is:%d\n",total_amount);
    }

    //ensuring minimum bill should be rs256;
    if( total_amount<256){
        total_amount=256;
        printf("the total bill amount is:%d\n",total_amount);
    }


   

}