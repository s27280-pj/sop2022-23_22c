#include <stdio.h>

int main() {
    int sum = 0;
    int num;
    while (scanf("%d", &num) == 1) {
        sum += num;
    }
    printf("Suma: %d\n", sum);
    return sum;
}
