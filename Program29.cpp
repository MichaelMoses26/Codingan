#include <stdio.h>

int main () {
    int Biaya_BPP, Biaya_SKS, Total_biaya;

    printf("Masukkan biaya BPP: ");
    scanf("%d", &Biaya_BPP);

    printf("Masukkan biaya satu SKS ");
    scanf("%d", &Biaya_SKS);

    Total_biaya = (Biaya_SKS * 20) + Biaya_BPP;

    printf("Biaya kuliah semester 1 tahun 2025/2026: %d", Total_biaya);

    return 0;

}