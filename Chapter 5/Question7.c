#include<stdio.h>
int main(){
    int a;
    int count_positive=0;
    int count_negative=0;    
    int count_zero=0;
    printf("Enter the amount of digits you want to enter:");
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(b[i]==0) count_zero++;
        if(b[i]<0) count_negative++;
        if(b[i]>0) count_positive++;
    }
    printf("Positive numbers=%d\n",count_positive);
    printf("Negative numbers=%d\n",count_negative);
    printf("Zeroes=%d\n",count_zero);
    return 0;
}