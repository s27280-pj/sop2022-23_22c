#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Nie podano nazwy pliku.\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    int n;
    if (fscanf(file, "%d", &n) != 1) {
        printf("Nieprawidłowy format pliku.\n");
        return 1;
    }

    int *tab = malloc(n * sizeof(int));
    if (tab == NULL) {
        printf("Nie udało się zaalokować pamięci.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (fscanf(file, "%d", &tab[i]) != 1) {
            printf("Nieprawidłowy format pliku.\n");
            return 1;
        }
    }

    fclose(file);

    printf("Wczytane liczby:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }

    free(tab);

    return 0;
}
