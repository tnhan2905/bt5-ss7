#include <stdio.h>

int main() {
    int mang[5] = {11, 7, 30, 1, 18}, max = mang[0], min = mang[0];
    for (int i = 1; i < 5; i++) {
        if (mang[i] > max) max = mang[i];
        if (mang[i] < min) min = mang[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
