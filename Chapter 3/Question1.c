/*If the cost price and selling price of an item are input through the keyboard, 
wap to determine whether the seller has made profit or incurred loss. 
Also determine how much profit he made or loss he incurred.*/
#include<stdio.h>
int main(){
    float c_p, s_p, profit , loss;

    printf("Enter cost price:");
    scanf("%f",&c_p);
    
    printf("\nEnter selling price:");
    scanf("%f",&s_p);

    if(c_p<s_p){
        profit= s_p-c_p;
        printf("Congratulation! You made a Profit! of Rs. %.2f\n",profit);
    }

    else if(c_p==s_p){
        printf("No Profit or loss");
    }

    else{
        loss= c_p-s_p;
        printf("Sorry! You incurrred Loss! of Rs. %.2f\n",loss);

    }

    return 0;
}