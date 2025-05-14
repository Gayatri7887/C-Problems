/*to check whether a character entered through the keyboard is a:
Lowercase letter
Uppercase letter
Digit
Special character*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It is an Uppercase Letter.\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("It is a Lowercase Letter.\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("It is a Digit.\n");
    } 
    else {
        printf("It is a Special Character.\n");
    }

    return 0;
}
