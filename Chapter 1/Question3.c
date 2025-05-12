/*If marks obtained by a student in five different subjects are input through the keyboard, 
WAP to find out aggregate marks and percentage marks obtained by the student. 
Assume that MM that can be obtained by a student in each subject is 100 */
#include<stdio.h>
#include<math.h>
int main(){
    float marks_1, marks_2, marks_3, marks_4, marks_5;
    float aggregate, percentage,sum; 
    printf("Enter marks for 5 subjects:\n");
    scanf("%f %f %f %f %f", &marks_1, &marks_2, &marks_3, &marks_4, &marks_5);
    sum= marks_1+marks_2+ marks_3+ marks_4+ marks_5;

    aggregate= sum/5;

    percentage= (sum/500)*100;

    printf("Aggregate Marks= %.2f\n",aggregate);
    printf("Percentage= %.2f\n",percentage);
    return 0;
}