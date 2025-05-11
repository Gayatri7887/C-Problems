/*Ramesh's basic salary is input through the keyboard. The dearness allowance is 40% of the basic salary,
and the house rent allowance is 20% of the basic salary. Write a program to calculate his gross salary.*/
#include <stdio.h>
int main() {
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate allowances
    dearness_allowance = 0.4 * basic_salary;
    house_rent_allowance = 0.2 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    // Output gross salary
    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}