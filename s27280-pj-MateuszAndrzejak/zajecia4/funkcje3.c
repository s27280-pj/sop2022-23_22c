#include <stdio.h>

int maximum(int a, int b) {
    return a > b ? a : b;
}

int minimum(int a, int b) {
    return a < b ? a : b;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    int (*functions[])(int, int) = { maximum, minimum, sum };
    int functionId, elementCount, i, result, number;

    printf("Podaj numer funkcji (0-maksimum, 1-minimum, 2-suma): ");
    scanf("%d", &functionId);

    printf("Podaj liczbe elementow ciagu: ");
    scanf("%d", &elementCount);

    printf("Podaj %d elementow ciagu:\n", elementCount);

    scanf("%d", &number);
    result = number;

    for (i = 1; i < elementCount; i++) {
        scanf("%d", &number);

        if (functionId == 0) {
            result = functions[functionId](result, number);
        } else if (functionId == 1) {
            result = functions[functionId](result, number);
        } else if (functionId == 2) {
            result = functions[functionId](result, number);
        }
    }

    printf("Wynik: %d\n", result);

    return 0;
}
