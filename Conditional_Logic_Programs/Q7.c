// Accept marks from user and check pass or fail
#include<stdio.h>
int main(){

    int marks,pass,fail;
    printf("enter marks of student:");
    scanf("%d",&marks);

    if(marks>50 || marks==50){
        printf("student is pass with marks=%d:\n",marks);
    }
    else if(marks<50){
        printf("student is fail with marks=%d:\n",marks);
    }
    else{
        printf("student is fail wit marks=%d:\n",marks);
    }
}