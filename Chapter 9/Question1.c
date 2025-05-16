#include<stdio.h>
#include<math.h>

void avg_sum_sd(int,int,int,int,float*,float*,float*);

int main(){
    int a,b,c,d;
    float avg,sum,sd;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    avg_sum_sd(a,b,c,d,&sum,&avg,&sd);
    printf("Sum=%.2f\n",sum);
    printf("AVG=%.2f\n",avg);
    printf("SD=%.2f\n",sd);
    return 0;
}

void avg_sum_sd(int a,int b,int c,int d,float *sum,float *avg,float *sd){
    *sum=a+b+c+d;
    *avg=*sum/4;
    *sd=sqrt((pow((a-*avg),2)+pow((b-*avg),2)+pow((c-*avg),2)+pow((d-*avg),2))/4);
    
}
