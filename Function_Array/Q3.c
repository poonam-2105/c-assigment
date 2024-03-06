
#include<stdio.h>
#include<string.h>
int main(){
    char str[5],temp;
    int i,len;
    printf("enter the string:");
    gets(str);
    len=strlen(str)-1;
    // reversing string
    for(i=0;i<strlen(str)/2;i++){
        temp=str[i];
        str[i]=str[len];
        str[len--]=temp;
    }
    printf("reverse string:=%s",str);


}