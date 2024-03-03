//Q11.2)= .Accept 5 names from user at run time
#include<stdio.h>
int main(){

    char name[5][50];//accepeting 5 names from the users..
    printf("Enter the name from the user\n:");
    for(int i=0;i<5;i++){
        printf("The name is:%d=",i+1);
        scanf("%s",&name[i]);
    }

    // displaye the name of the given student...
    printf("---------------------------------------\n");
    printf("The names are:\n");
    for(int i=0;i<5;i++){
        printf("Name%d:%s\n",i,name[i]);
    }
}