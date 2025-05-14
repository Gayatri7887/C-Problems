/*C program correctly calculates a raised to the power b using a loop. */
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    int prod = 1;
    for (int i=1; i<=b; i++){
        prod*=a;
    }
    printf("%d",prod);
    return 0;
}