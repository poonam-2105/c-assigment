//.find the area of a rectangular prism formula : A=2(wl+hl+hw)...
#include<stdio.h>
int main(){

    int w,l,h,result;
    printf("the area of rectanguler prism:");
    scanf("%d%d%d",&l,&w,&h);

    result=2*(w*l+l*h+w*h);
    printf("the area of rectanguler prism:%d\n",result);
}