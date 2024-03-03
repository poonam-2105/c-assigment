//.Calculate compound interest (Compound Interest formula:
//a). Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b). Compound Interest = Amount – P
#include<stdio.h>
#include<math.h>
int main(){

    float amount,principal,rate,time,compound_intrest;

    printf("the principle amount is:\n");
    scanf("%f",&principal);
    printf("the rate of intrest:\n");
    scanf("%f",&rate);
    printf("the time is(year)\n");
    scanf("%f",&time);

    rate=rate/100;
    amount=principal*pow((1+rate),time);
    compound_intrest=amount-principal;

    printf("the principal amountis:=%f\n",principal);
    printf("the time is:=%f\n",time);
    printf("the amount is:=%f\n",amount);
    printf("compund intrest is:=%.f\n",compound_intrest);
}