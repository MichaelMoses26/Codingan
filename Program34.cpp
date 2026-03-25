#include <stdio.h>

float keDollar(float rupiah) {
    return rupiah / 16000;
}

float keEuro(float rupiah) {
    return rupiah / 19000;
}

int main() {
    float rupiah;
    int pilihan;

    printf("Masukkan jumlah rupiah: ");
    scanf("%f", &rupiah);

    printf("1. Dollar\n2. Euro\nPilih: ");
    scanf("%d", &pilihan);

    if(pilihan == 1)
        printf("Hasil: %.2f USD\n", keDollar(rupiah));
    else if(pilihan == 2)
        printf("Hasil: %.2f EUR\n", keEuro(rupiah));
    else
        printf("Pilihan salah\n");

    return 0;
}