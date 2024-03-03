//Q26)=Convert temperature Fahrenheit to Celsius..

#include<stdio.h>
int main(){


    float fahrenheit,celsius;

    //ASK THE USER TO ENTER THE FAHERNHEIT;
    printf("Enter the fahernheit:");
    scanf("%f",&fahrenheit);

    //CONVERT THE FAHERNAHEIT TO CELSIUS...
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    //PRINT  THE RESULT.....
    printf("THE CELSIUS IS:%f",celsius);
}