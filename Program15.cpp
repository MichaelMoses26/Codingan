#include <stdio.h>

int main() {
    int P, L, Luas, Keliling;

    printf("Masukkan panjang persegi panjang: ");
    scanf("%d", &P);

    printf("Masukkan lebar persegi panjang: ");
    scanf("%d", &L);

    Luas = P * L;
    Keliling = 2 * P + 2 * L;

    printf("Hasil dari luas persegi panjang: %d\n", Luas);
    printf("Hasil dari keliling persegi panjang: %d\n", Keliling);

    return 0;
}
