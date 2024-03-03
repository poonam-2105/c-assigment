//.Calculate compound interest
#include<stdio.h>
#include<math.h>

int main(){

float principal,rate,time,compound_intrest;

printf("the princeple amount is:\n");
scanf("%f",&principal);

printf("the rate of intrest on principle amount is:\n");\
scanf("%f",&rate);

printf("the time is(in year)\n");
scanf("%f",&time);


rate=rate/100;

compound_intrest = principal * pow((1 + rate), time) - principal;

printf("Compound interest after %.2f years: rupes%.2f\n", time, compound_intrest);

}