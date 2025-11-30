#include <stdio.h>
void swap(int *a, int *b) {
    if (!a || !b) return;
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int x = 5, y = 10;
    printf("Before swap:   x= %d  y= %d\n", x, y);
    swap(&x, &y);
    printf("After swap :   x= %d  y= %d\n", x, y);
    return 0;
}

