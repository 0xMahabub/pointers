#include <stdio.h>

int main() {
    // defining some variables
    int a; // normal variable
    int *p; // variable defined as pointer

    // playing with the value and memory location
    a = 5; // normal varialbe value
    p = &a;

    // printf("Pointers p=%d", p); // p = 6422.... memory location
    // printf("Pointers p=%d", &p); // p = 6422.... memory location
    printf("Pointers p=%d", *p); // p = 5; it will give the value

    // dereferencing
    *p = 12; // going to change the linked mem. address value too (i.e. a=12)
    printf("\nAfter Dereferencing p=%d", a);

    return 0;
}