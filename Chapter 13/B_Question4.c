//To multiply every element in the array by 3 using a pointer
#include <stdio.h>

void modify(int *);

int main() {
    int arr[10], *p;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;      
    modify(p);     

    return 0;
}

void modify(int *p) {
    for (int i = 0; i < 10; i++) {
        *(p + i) = 3 * (*(p + i));     
        printf("%d ", *(p + i));       
    }
}
