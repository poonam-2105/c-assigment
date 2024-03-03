//Q18)=Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){

    //ASK THE USER THE SELLING AND COST PRICE TO TAKE OUT LOSS AND PROFIT;
    float loss,profit,selling_price,cost_price;
    printf("Enter the selling price :");
    scanf("%f",&selling_price);

    printf("Enter the cost price:");
    scanf("%f",&cost_price);

    //CHECK THE PROFIT AND LOSS;;
    if( selling_price>cost_price){
        profit=selling_price-cost_price;
        printf("The profit is %f\n",profit);
    }
    else if(cost_price>selling_price){
        loss=cost_price-selling_price;
        printf("The loss is %f\n",loss);
    }
    else{
        printf("NO PROFIT NO LOSS:\n");
    }
}