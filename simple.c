#include <stdio.h>

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int total = 0;
    for (int i = 1; i <= sizeof(array); i++) {
        total += array[i];
    }
    printf("The total is: %d", total + "\n");

}