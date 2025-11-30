#include <stdio.h>
void print_2d_array(const int *arr, size_t width, size_t height) {
    if (!arr) return;
    for (size_t r = 0; r < height; ++r) {
        for (size_t c = 0; c < width; ++c) {
            printf("%4d ", arr[r * width + c]);
        }
        printf("\n");
    }
}

int main(void) {
    size_t w = 4, h = 3;
    int grid[] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9,10,11,12
    };
    print_2d_array(grid, w, h);
    return 0;
}

