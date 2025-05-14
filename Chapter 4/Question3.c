/*A certain grade of steel graded according to the following conditions:
i. Hardness must be greater than 50.
ii. Carbon Content must be less than 0.7.
iii. Tensile strength must be greater than 5600.
The grades are as follows:
Grade is 10 if all three conditions are met.
Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Grade is 6 if only one condition is met.
Grade is 5 if none of the conditions are met.
Write a program, which will require the user to give values of hardness, carbon content and tensile strength
of the steel under consideration and output the grade of the steel.*/
#include <stdio.h>

int main() {
    float hardness, carbon_content, tensile_strength;
    scanf("%f %f %f", &hardness, &carbon_content, &tensile_strength);

    int count = 0;
    if (hardness > 50) count++;
    if (carbon_content < 0.7) count++;
    if (tensile_strength > 5600) count++;

    if (count == 3)
        printf("Grade=10");
    else if ((hardness > 50) && (carbon_content < 0.7))
        printf("Grade=9");
    else if ((carbon_content < 0.7) && (tensile_strength > 5600))
        printf("Grade=8");
    else if ((hardness > 50) && (tensile_strength > 5600))
        printf("Grade=7");
    else if (count == 1)
        printf("Grade=6");
    else
        printf("Grade=5");

    return 0;
}
