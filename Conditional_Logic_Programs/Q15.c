//Q15)=Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible
#include<stdio.h>
int main(){
    int Total,maths,Physics,Chemistry,Total_maths_physic;
    
    //enter the  marks of maths;c
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d",&maths);

    //enter the marks for physics;
    printf("Input the marks obtained in Physics: ");
    scanf("%d",&Physics);

    //enter the marks for chemistry;
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d",&Chemistry);

    //adding  the total of maths chem and phys 
    printf("the Total of maths,chemistry,physics for eligibliti:");
    Total=Physics+maths+Chemistry;
    

    // adding total for maths and physics..
    printf(" the total of maths and physics for eligiblity:");
    Total_maths_physic=Physics+maths;

    printf("------------------------------------------------------------------------\n");

   //printing of given input...
    printf("The marks for maths is:%d\n",maths);
    printf("The marks for physcis is:%d\n",Physics);
    printf("The marks for chemistry is:%d\n",Chemistry);
    printf("The Total  marks for eligibel  of Maths, Physics, and Chemistry:%d\n",Total);
    printf("The Total  marks for eligibel of Maths, Physics is:%d\n",Total_maths_physic);

  // check the eligiblity criteriya....
    if(maths>=65 && Physics>=55 && Chemistry>=50 && Total>=190 || Total_maths_physic>=140){
        printf("[_THE CANDIDATE IS ELIGIBEL FOR THE COURSE:_]\n");
    }
    
    else{
        printf("[_THE CANDIDATE IS NOT ELIGIBEL FOR THE COURSE:_]\n");
    }

}