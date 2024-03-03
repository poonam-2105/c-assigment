//Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?
#include<stdio.h>
int main(){
     
     int num_ofstudent,apples_requere;

     printf("the number of student:");
     scanf("%d",&num_ofstudent);

     apples_requere=num_ofstudent*5;

     printf("total apples are :%d",apples_requere);
}