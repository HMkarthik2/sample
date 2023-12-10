#include <stdio.h>

int main() {
    int number=-125, reversedNumber = 0;
    


    while (number != 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}