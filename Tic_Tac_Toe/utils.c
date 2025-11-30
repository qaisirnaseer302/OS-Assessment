#include <stdio.h>
#include "utils.h"

int read_move(int *row, int *col) {
    if (scanf("%d %d", row, col) == 2) return 1;
    return 0;
}

