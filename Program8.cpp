#include <stdio.h>

int main() {
    char huruf = 'A';
    int baris, kolom, spasi;

    for (baris = 1; baris <= 4; baris++) {
        for (spasi = 4; spasi > baris; spasi--) {
            printf("  ");
        }

        for (kolom = 1; kolom <= baris; kolom++) {
            printf("%c ", huruf++);
        }
        printf("\n");
    }

    return 0;
}
