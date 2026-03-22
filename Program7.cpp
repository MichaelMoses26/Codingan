#include <stdio.h>

int main() {
    int SKS, Masa_studi, Lulus_skripsi, Tulisan_ilmiah, SKPI, Sertifikasi, Lulus = 1;
    float IPK;

    printf("Masukkan jumlah SKS: ");
    scanf("%d", &SKS);

    printf("Masukkan nilai IPK: ");
    scanf("%f", &IPK);

    printf("Masukkan lama masa studi (semester): ");
    scanf("%d", &Masa_studi);

    printf("Apakah sudah lulus skripsi (Ya = 1, Tidak = 0): ");
    scanf("%d", &Lulus_skripsi);

    printf("Apakah sudah memiliki tulisan ilmiah (Ya = 1, Tidak = 0): ");
    scanf("%d", &Tulisan_ilmiah);

    printf("Masukkan jumlah poin SKPI: ");
    scanf("%d", &SKPI);

    printf("Apakah sudah memiliki sertifikasi (Ya = 1, Tidak = 0): ");
    scanf("%d", &Sertifikasi);

    if (SKS < 144) {
        printf("Anda tidak lulus karena jumlah SKS kurang dari 144.\n");
        Lulus = 0;
    }
    if (IPK < 2.4) {
        printf("Anda tidak lulus karena IPK anda kurang dari 2.4.\n");
        Lulus = 0;
    }
    if (Masa_studi > 16) {
        printf("Anda tidak lulus karena lama masa studi anda lebih dari 16 semester.\n");
        Lulus = 0;
    }
    if (Lulus_skripsi == 0) {
        printf("Anda tidak lulus karena anda belum lulus skripsi.\n");
        Lulus = 0;
    }
    if (Tulisan_ilmiah == 0) {
        printf("Anda tidak lulus karena anda belum memiliki tulisan ilmiah.\n");
        Lulus = 0;
    }
    if (SKPI < 150) {
        printf("Anda tidak lulus karena poin SKPI anda dibawah 150.\n");
        Lulus = 0;
    }
    if (Sertifikasi == 0) {
        printf("Anda tidak lulus karena anda belum memiliki sertifikasi.\n");
        Lulus = 0;
    }

    if (Lulus == 1) {
        printf("!!!SELAMAT ANDA DINYATAKAN LULUS DARI UNIVERSITAS TARUMANAGARA!!!\n");
    } else {
        printf("ANDA DINYATAKAN TIDAK LULUS\n");
    }

    return 0;
}
