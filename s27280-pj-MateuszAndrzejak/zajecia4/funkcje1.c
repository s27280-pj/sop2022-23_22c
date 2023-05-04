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
    int a = 10, b = 20;
    int (*f)(int,int);

    f = maximum;
    printf("Maximum of %d and %d is %d\n", a, b, f(a,b));

    f = minimum;
    printf("Minimum of %d and %d is %d\n", a, b, f(a,b));

    f = suma;
    printf("Sum of %d and %d is %d\n", a, b, f(a,b));

    return 0;
}
