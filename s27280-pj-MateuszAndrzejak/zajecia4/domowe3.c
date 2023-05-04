#include <stdio.h>

int fib_recursion(int n) {
    if (n <= 1) {
        return n;
    }
    return fib_recursion(n - 1) + fib_recursion(n - 2);
}

int fib_iteration(int n) {
    if (n <= 1) {
        return n;
    }
    int fib_prev = 0;
    int fib_curr = 1;
    for (int i = 2; i <= n; i++) {
        int fib_next = fib_prev + fib_curr;
        fib_prev = fib_curr;
        fib_curr = fib_next;
    }
    return fib_curr;
}

int main() {
    int n = 10;
    printf("Ciąg Fibonacciego do n=%d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fib_recursion(i));
    }
    printf("\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", fib_iteration(i));
    }
    printf("\n");
    return 0;
}
