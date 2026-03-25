#include <stdio.h>
#include <windows.h>

int main() {
    int angka;

    printf("=== Timer Mundur Sederhana ===\n");
    printf("Masukkan angka untuk memulai countdown: ");
    scanf("%d", &angka);

    printf("\nMulai hitung mundur...\n");

    while (angka >= 0) {
        printf("%d\n", angka);
        Sleep(100);
        angka = angka - 1;
    }

    printf("Waktu habis!\n");

    return 0;
}
