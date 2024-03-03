//Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
#include<stdio.h>

void main(){

    int a,b,temp;

    printf("the number of a:=");
    scanf("%d%d",&a,&b);

    printf("before swaping:a=%d\n",a);
    printf("before swaping b=%d\n",b);
    //with 3rd variable swaping
   temp=a;
    a=b;
    b=temp;

    printf("the number after swaaping a=%d\n",a);
    printf("the number after the swaping b=%d\n",b);

    //calculate witout 3rd variable
    int a2,b2;
    printf("the number of a and b:");
    scanf("%d%d",&a2,&b2);
    a2,b2;
    a2=a2+b2;
    b2=a2-b2;
    a2=a2-b2;

    printf("the number after swaaping a=%d\n",a2);
    printf("the number after the swaping b=%d\n",b2);


}