#include <stdio.h>

void increment() {
    // Static variable declaration
    static int counter = 0;
    counter++;

    printf("Counter: %d\n", counter);
}

int main() {
    printf("Calling increment function multiple times:\n");
    increment();
    increment();
    increment();

    return 0;
}