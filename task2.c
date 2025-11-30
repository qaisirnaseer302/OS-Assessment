#include <stdio.h>
int arrays_equal(const int *a, const int *b, size_t len) {
    if (!a || !b) return 0;
    for (size_t i = 0; i < len; ++i) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    int a[] = {1,2,3,4};
    int b[] = {1,2,3,4};
    int c[] = {1,2,0,4};

    printf("a == b ? %s\n", arrays_equal(a,b,4) ? "YES" : "NO");
    printf("a == c ? %s\n", arrays_equal(a,c,4) ? "YES" : "NO");
    return 0;
}

