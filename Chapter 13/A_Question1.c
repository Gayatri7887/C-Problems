/* Twenty-five numbers are entered from the keyboard into an array. 
The number to be searched is entered through the keyboard by the user. 
Write a program to find if the number to be searched is present in the array and if it is present, 
display the number of times it appears in the array.*/
#include<stdio.h>
int main(){
    int arr[25];
    for (int i=0;i<25;i++){
        scanf("%d",&arr[i]);
    }    

    int n;
    scanf("%d",&n);
    
    int count=0;

    for (int i=0;i<25;i++){
       if (n==arr[i]){
       count++;}}    
    
    if (count>0) {printf("%d is present.\n",n);
        printf("It appeared %d times in the array.\n",count);}
    
    else printf("%d is not present.\n",n);
    
    return 0;
}