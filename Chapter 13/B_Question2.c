/*If an array arr contains n elements, then write a program to check if arr[0]=arr[n-1],arr[1]=arr[n-2]
and so on....
*/
#include<stdio.h>
int main(){
    int n,is_palindrome=1; 
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }    
    for(int i=0;i<(n/2);i++){
        if(arr[i]!=arr[n-(i+1)]){
            is_palindrome=0;
        }
    }
    if(is_palindrome) printf("Array is palindrome");
    else printf("Array is not palindrome");
    return 0;
}