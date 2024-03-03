//Q6)=Find the Character Is Vowel or Not
#include<stdio.h>
int main(){

    char ch;//defineing character:
    printf("enter the charater:=");
    scanf("%c",&ch);
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
            printf("it is vowel%c",ch);
        }

         else{
        printf("it is not vowel");
    }
}