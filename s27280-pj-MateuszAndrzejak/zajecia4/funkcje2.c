#include <stdio.h>

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int suma(int a, int b) {
    return a + b;
}

int main() {
    int (*funkcje[3])(int, int);
    funkcje[0] = &maximum;
    funkcje[1] = &minimum;
    funkcje[2] = &suma;
    
    int a = 10, b = 5;
    
    printf("Max: %d\n", funkcje[0](a, b));
    printf("Min: %d\n", funkcje[1](a, b));
    printf("Sum: %d\n", funkcje[2](a, b));
    
    return 0;
}
