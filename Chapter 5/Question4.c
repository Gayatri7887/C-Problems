/*To print the ASCII value of all chars 0-255*/
#include<stdio.h>
int main(){
    for (int i= 0; i<=255;i++){
        printf("ASCII value of %c= %d\n",i,i);
    }    
    return 0;
}