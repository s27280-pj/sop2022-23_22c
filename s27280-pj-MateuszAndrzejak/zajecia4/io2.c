#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *f;
    int n, i;
    int *numbers;

    if (argc > 1) {
        f = fopen(argv[1], "r");
    } else {
        f = stdin;
    }

    if (fscanf(f, "%d", &n) != 1) {
        fprintf(stderr, "Błąd odczytu z pliku.\n");
        return EXIT_FAILURE;
    }

    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        fprintf(stderr, "Błąd alokacji pamięci.\n");
        return EXIT_FAILURE;
    }

    for (i = 0; i < n; i++) {
        if (fscanf(f, "%d", &numbers[i]) != 1) {
            fprintf(stderr, "Błąd odczytu z pliku.\n");
            free(numbers);
            return EXIT_FAILURE;
        }
    }

    if (f != stdin) {
        fclose(f);
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    free(numbers);

    return EXIT_SUCCESS;
}
