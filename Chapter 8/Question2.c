//a raised to power b (basically creating own pow() function without using math.h )
#include<stdio.h>
int power(int,int);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sol= power(a,b);
    printf("%d",sol);
    return 0;
}
int power(int x,int y){
    int p=1;
    for (int i=1;i<=y;i++){
        p*=x;
    }
    return p;
}