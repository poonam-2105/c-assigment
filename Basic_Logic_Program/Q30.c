//WAP to convert years into days and days into years
#include<stdio.h>
int main(){

    int days,year,choies;

    // ENTER THE DAYS...
    printf("enter the choies::\n");
    printf("1.year inot days\n");
    printf("2.days into year\n");
    scanf("%d",&choies);

    //CONVERT THE DAYS INTO YEAR AND YEAR INTO DAYS...
    if(choies==1){
        printf("enter the year:\n");
        scanf("%d",&year);
        
        days=year*365;
        
        printf("the days  and years:%d= days=%d\n",year,days);
    }
    else if(choies==2){
        printf("enter the days:\n");
        scanf("%d",&days);
        year=days/365;
        printf("the year and days:%d= year=%d",days,year);
    }
   else{
    printf("errror:");
   }
} 
