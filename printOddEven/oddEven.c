#include <stdlib.h>
#include <stdio.h>

#define LOWER 0
#define UPPER 100

int main(void) {

    int odd, even, count;

    count = LOWER;
    while (count <= UPPER) {
        if (count % 2 == 0) {
            even = count;
            printf("Even: %d\n", even);
        } else {
            odd = count;
            printf("Odd: %d\n", odd);
        }
        count++;
    }

}