//WAP to copy the content of one array into another in the reverse order
#include<stdio.h>

int main(){
    int n; 
    scanf("%d",&n);
    
    int arr1[n];
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }  
    
    int arr2[n];
    
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[n - 1 - i];
    }

    
    for (int i=0;i<n;i++){
        printf("arr1{%d}=%d\n",i,arr1[i]);
    } 
    
    for (int i=0;i<n;i++){
        printf("arr2{%d}=%d\n",i,arr2[i]);
    } 
    
    return 0;
}