#include <stdio.h>

int main() {
    int classObtained, subjectsFailed;
    int grace = 0;

    printf("Enter class obtained (1 for First, 2 for Second, 3 for Third): ");
    scanf("%d", &classObtained);

    printf("Enter number of subjects failed in: ");
    scanf("%d", &subjectsFailed);

    switch (classObtained) {
        case 1:
            if (subjectsFailed > 3)
                grace = 0;
            else
                grace = subjectsFailed * 5;
            break;
        case 2:
            if (subjectsFailed > 2)
                grace = 0;
            else
                grace = subjectsFailed * 4;
            break;
        case 3:
            if (subjectsFailed > 1)
                grace = 0;
            else
                grace = 5;
            break;
        default:
            printf("Invalid class entered.\n");
            return 1;
    }

    if (grace > 0)
        printf("Grace marks = %d\n", grace);
    else
        printf("No grace marks awarded.\n");

    return 0;
}
