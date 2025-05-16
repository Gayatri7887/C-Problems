// find the smallest element of the array
#include<stdio.h>
int main(){
    int arr[25];
    for (int i=0;i<25;i++){
        scanf("%d",&arr[i]);
    }    

    int smallest= arr[0];
    for (int i=1;i<25;i++){
        if (arr[i]<smallest){
            smallest=arr[i];
        }        
    }    
    printf("%d",smallest);

    
    return 0;
}