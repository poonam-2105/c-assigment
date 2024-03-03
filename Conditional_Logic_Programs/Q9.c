//Q9)=C Program to Check Uppercase or Lowercase or Digit or Special
//Character
#include<stdio.h>
int main(){
    
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);//intput form users
     
     //using ascii value 
   
    if(ch>=65 && ch<=90){
        printf("The charecter is in upercase:\n");
    }
    else if(ch>=97 && ch<=122){
        printf("The charecter is in lower case:\n");
    }
    else if(ch>=33 && ch<=47 || ch>=58 && ch<=64 || ch>=92 && ch<=96){
        printf("The charecter is special:\n");
    }
    else if(ch>=48 && ch<=57) {
        printf("The charecter is in numeric form:\n");
    }
}