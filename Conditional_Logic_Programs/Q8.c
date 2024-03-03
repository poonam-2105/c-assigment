//Q8)=WAP to accept the height of a person in 
//centimeters and categorize the
//person according to their height.
#include<stdio.h>
int main(){

    float height_cm;//defineing
    printf("Enter the height of the persone:=");
    scanf("%f",&height_cm);

    if(height_cm<150){ //conditions
        printf("[The persone is short:]");
    }
    else if(height_cm>=150 && height_cm<165){
        printf("[The persone is average:]");
    }
    else if(height_cm>=165 && height_cm<=190){
        printf("[The persone is tall:]");
    }
    else{
        printf("[The persone is very tall:]");
    }
}
