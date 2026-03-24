#include <stdio.h>

void tabelPerkalian(int n) {
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int angka;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    tabelPerkalian(angka);

    return 0;
}