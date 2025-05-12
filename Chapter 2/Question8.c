/*Two numbers are input through the keyboard into two locations C and D.
 Write a program to interchange the contents of C and D*/
 #include<stdio.h>
 int main(){
    int C,D;
    printf("C= ");
    scanf("%d",&C);
    printf("\nD= ");
    scanf("%d",&D);
    int temp=C;
    C=D;
    D=temp;
    printf("C= %d",C);
    printf("\nD= %d",D);
    return 0;
 }