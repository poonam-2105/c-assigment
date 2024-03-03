//Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot
#include<stdio.h>
int main(){

    //ASK THE USER TO ENTER THE TEMPERATURE IN CENTIGRADE...
    float temperature;
    printf("Enter the temperature:");
    scanf("%f",&temperature);

    //CHECK THE TEMPERATURE STATUSE AND DISPLAYE IT..
    if(temperature<0){
        printf("FREEZING WEATHER\n");
    }
    else if(temperature>=0 && temperature<=10){
        printf("VERY COLD WEATHER:\n");
    }
    else if(temperature>=10 && temperature<=20){
        printf("COLD WEATHER:\n");
    }
    else if(temperature>=20  && temperature<=30){
        printf("TEMPERATURE IS NORMAL IN WEATHER:\n");
    }
    else if(temperature>=30 && temperature<=40){
        printf("ITS HOT WEATHER:\n");
    }
    else{
        printf("THE WEATHER IS ABOVE 40 IT IS [VERY HOT WEATHER:]:\n");
    }

}