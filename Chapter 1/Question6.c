/*Paper of size A0 has dimensions 1189 mm X 841 mm. 
Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. 
Thus paper of size A1 would have dimensions 841 mm x 594 mm. 
Write a program to calculate and print paper sizes A0 to A8*/
#include <stdio.h>

int main() {
    int width = 841;    // A0 short side in mm
    int height = 1189;  // A0 long side in mm

    printf("Paper Sizes (A0 to A8):\n");

    for (int i = 0; i <= 8; i++) {
        printf("A%d: %d mm x %d mm\n", i, height, width);

        // For next paper size, cut along the longer side
        int temp = height;
        height = width;
        width = temp / 2;
    }

    return 0;
}
