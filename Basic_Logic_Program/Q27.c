//Q27)=Convert days into months..
#include<stdio.h>
int main(){
    int days;
    float months;

    //TAKE INPUT FROM THE USER TO CONVERTH THE DAYS IN TO MONTHS...
    printf("Enter the days:");
    scanf("%d",&days);
    
    months=days/30.0;

    //PRINT  THE RESULT....
    printf("DAYS INTO MONTS:%d= months: %.2f",days,months);

}
