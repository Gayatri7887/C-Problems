#include<stdio.h>
int main(){
    int arr[25];
    for (int i=0;i<25;i++){
        scanf("%d",&arr[i]);
    }    

    int even=0, odd=0, positive=0, negative=0;
    for (int i=0;i<25;i++){
        if (arr[i]>0){
              positive++;
        }
        else if (arr[i]<0)
        {
            negative++;
        }
        
    }    
    for (int i=0;i<25;i++){
        if (arr[i]%2==0){
              even++;
        }
        else
        {
            odd++;
        }
    }
    printf("No of Positive elements= %d\n",positive);
    printf("No of Negative elements= %d\n",negative);
    printf("No of Even elements= %d\n",even);
    printf("No of Odd elements= %d\n",odd);
    
    return 0;
}