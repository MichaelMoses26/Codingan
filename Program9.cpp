#include <stdio.h>

int main() {
    int baris, kolom, spasi;
    int n = 3;

    for (baris = n; baris >= 1; baris--) {
        for (spasi = 1; spasi <= n - baris; spasi++) {
            printf(" ");
        }

        for (kolom = 1; kolom <= (2 * baris - 1); kolom++) {
            printf("*");
        }

        printf("\n");
    }

    for (baris = 2; baris <= n; baris++) {
        for (spasi = 1; spasi <= n - baris; spasi++) {
            printf(" ");
        }

        for (kolom = 1; kolom <= (2 * baris - 1); kolom++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
