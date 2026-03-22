#include <stdio.h>

int main () {
    float jam_kerja, upah_perjam, Total_upah;

    printf("Berapa jam anda bekerja dalam satu hari: ");
    scanf("%f", &jam_kerja);

    printf("Masukkan upah anda per jam: ");
    scanf("%f", &upah_perjam);

    Total_upah = (jam_kerja * upah_perjam) * 7;

    printf("Total upah anda selama satu minggu: %.2f\n", Total_upah);

    return 0;

}