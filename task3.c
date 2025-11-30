#include <stdio.h>
#include <stdlib.h>
int main() {
    const char *fname = "data.txt";
    FILE *f = fopen(fname, "r");
    if (!f) {
        perror("fopen");
        return 1;
    }

    long sum = 0;
    long val;
    while (fscanf(f, "%ld", &val) == 1) {
        sum += val;
    }
    fclose(f);
    printf("Sum of numbers in %s = %ld\n", fname, sum);
    return 0;
}

