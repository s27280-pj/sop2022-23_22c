#include <stdio.h>

#define BYTES_PER_LINE 16

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error: could not open file '%s'\n", filename);
        return 1;
    }

    printf("Loading file: %s\n", filename);

    int byte_count = 0;
    unsigned char buffer[BYTES_PER_LINE];
    int bytes_read;
    do {
        bytes_read = fread(buffer, 1, BYTES_PER_LINE, file);
        if (bytes_read > 0) {
            printf("%08X ", byte_count);
            for (int i = 0; i < bytes_read; i++) {
                printf("%02X ", buffer[i]);
                if (i == (BYTES_PER_LINE / 2) - 1) {
                    printf(" ");
                }
            }
            for (int i = bytes_read; i < BYTES_PER_LINE; i++) {
                printf("   ");
                if (i == (BYTES_PER_LINE / 2) - 1) {
                    printf(" ");
                }
            }
            printf(" ");
            for (int i = 0; i < bytes_read; i++) {
                if (buffer[i] >= 32 && buffer[i] <= 126) {
                    printf("%c", buffer[i]);
                } else {
                    printf(".");
                }
            }
            printf("\n");
            byte_count += bytes_read;
        }
    } while (bytes_read == BYTES_PER_LINE);

    fclose(file);
    return 0;
}
