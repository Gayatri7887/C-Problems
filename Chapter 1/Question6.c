    /*Wind chill factor is the felt air temperature on exposed skin due to wind. 
    The wind chill temperature is always lower than the air temperature, and is calculated as per the following formlula: 
    wcf = wcf = 35.74 + 0.6215*t + (0.42751*t - 35.75)*pow(v, 0.16);
    where t and v are temerature and velocity of the wend respectively. WAP to recieve these values and calculate wind chill factor
    */
    #include<stdio.h>
    #include<math.h>
    int main(){
        float temp, velocity;
        float wcf;
        printf("Enter Temperature and Wind Velocity:\n");
        scanf("%f %f",&temp,&velocity);
        wcf = wcf = 35.74 + 0.6215*temp + (0.42751*temp - 35.75)*pow(velocity, 0.16);
        printf("Wind Chill Factor : %.2f\n", wcf);
        return 0;
    }