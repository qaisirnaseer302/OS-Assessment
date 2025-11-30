#include <stdio.h>
int main() {
    int n = 10;
    int *ptr= &n;

    printf("Before: n = %d\n", n);
    *ptr += 5;
    printf("After:  n = %d \n", n);
    printf("Address of n: %p, ptr to n: %p\n", &n, ptr);

    int arr[3] = {10, 30, 2000};
    int *p = arr;

    printf("\nArray contents and addresses:\n");
    for(size_t i = 0; i < 3; ++i) {
        printf("arr[%zu] = %d\t address = %p\n", i, *(p + i), (p + i));
    }

    return 0;
}

