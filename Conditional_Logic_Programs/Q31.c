//Q31)= Write a program in C to read any Month Number in integer and display the
//number of days for this month
#include<stdio.h>
int main(){
    int month;

    //accept the number of month from the user;
    printf("the number of month is:");
    scanf("%d",&month);

    //determine the numbers of days in the months
    switch(month){
        case 1:  case 3: case 5: case 7: case 9: case 11:
            printf("number of days 31 of month:=%d",month);
            break;
    
        case 4: case 6: case 8: case 10: case 12:
             printf("number of days 30 of month:=%d",month);
            break;

        case 2:
            printf("number of days 28 or 29 depend of leap year or note");
            break;
        
        default:
            printf("invalid:=");
        
    }
}