#include<stdio.h>

void avg_percentage(float,float,float,float*,float*);

int main(){
    float a,b,c; 
    float avg, percentage;  
    scanf("%f %f %f",&a,&b,&c);
    avg_percentage(a, b, c, &avg, &percentage);
    printf("AVG=%.2f\n",avg);
    printf("Percentage=%.2f",percentage);
    return 0;
}

void avg_percentage(float a,float b,float c,float *avg,float *percentage){
    *avg=(a+b+c)/3;
    *percentage= ((a+b+c)/300)*100;
}