/*write a program to recieve Cartesian Co-ordiantes(x,y) of a point and convert them into polar co-ordinate */
#include<stdio.h>
#include<math.h>
int main(){
    float x,y;
    printf("Enter Cartesian Co-ordiantes(x,y):");
    scanf("%f %f",&x,&y);
    float r, p;
    r= sqrt(pow(x,2)+pow(y,2));
    p= atan2(y,x);
    printf("Polar Co-ordiantes(r,p): %.2f %.2f",r,p);
    return 0;
}