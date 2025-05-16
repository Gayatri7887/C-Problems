x#include <stdio.h>

int main() {
    int day, month;

    printf("Enter your birth month (1-12): ");
    scanf("%d", &month);
    
    printf("Enter your birth day (1-31): ");
    scanf("%d", &day);

    if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        printf("Your Zodiac sign is Aquarius");
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        printf("Your Zodiac sign is Pisces");
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        printf("Your Zodiac sign is Aries");
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        printf("Your Zodiac sign is Taurus");
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        printf("Your Zodiac sign is Gemini");
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        printf("Your Zodiac sign is Cancer");
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        printf("Your Zodiac sign is Leo");
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        printf("Your Zodiac sign is Virgo");
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        printf("Your Zodiac sign is Libra");
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        printf("Your Zodiac sign is Scorpio");
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        printf("Your Zodiac sign is Sagittarius");
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        printf("Your Zodiac sign is Capricorn");
    else
        printf("Invalid date. Please check your input.");

    return 0;
}
