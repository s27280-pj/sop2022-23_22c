#include <stdio.h>

int maksimum(int a, int b) {
    return a > b ? a : b;
}

int minimum(int a, int b) {
    return a < b ? a : b;
}

int suma(int a, int b) {
    return a + b;
}

int main() {
    int (*functions[3])(int, int) = {maksimum, minimum, suma};
    int functionId, elementCount, v, i;
    
    scanf("%d %d %d", &functionId, &elementCount, &v);
    
    for (i = 1; i < elementCount; i++) {
        int x;
        scanf("%d", &x);
        v = functions[functionId](v, x);
    }
    
    printf("%d\n", v);
    return 0;
}
