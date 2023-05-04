#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Użycie: %s wysokość\n", argv[0]);
        return EXIT_FAILURE;
    }

    int wysokosc = atoi(argv[1]);
    if (wysokosc < 1) {
        printf("Nieprawidłowa wysokość: %d\n", wysokosc);
        return EXIT_FAILURE;
    }

    for (int i = 1; i <= wysokosc; i++) {
        for (int j = 0; j < wysokosc-i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
