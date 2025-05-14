#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if (a<115){
        printf("Flyweight");
    }    
    else if(a>=115 && a<=121){
        printf("Bantamweight");
    }
    else if(a>=122 && a<=153){
        printf("Featherweight");
    }
    else if (a>=154 && a<=189)
    {
        printf("Middleweight");
    }
    else{
        printf("Heavyweight");
    }
    return 0;
}