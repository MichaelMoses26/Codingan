#include <stdio.h>
#include <string.h>

double getTarifKendaraan(char jenis[]) {
    double tarifDasar = 5000;

    if (strcmp(jenis, "mobil") == 0)
        return tarifDasar;
    else if (strcmp(jenis, "motor") == 0)
        return tarifDasar * 0.5;
    else if (strcmp(jenis, "truk") == 0)
        return tarifDasar * 2;
    else
        return 0;
}

double hitungBiayaAwal(double tarif, int lamaParkir) {
    return tarif * lamaParkir;
}

double hitungDiskon(double biayaAwal, int lamaParkir) {
    if (lamaParkir > 5)
        return biayaAwal * 0.1;
    return 0;
}

double hitungBiayaParkir(char jenis[], int lamaParkir) {
    double tarif = getTarifKendaraan(jenis);
    double biayaAwal = hitungBiayaAwal(tarif, lamaParkir);
    double diskon = hitungDiskon(biayaAwal, lamaParkir);

    return biayaAwal - diskon;
}

double hitungTotal(double biaya[], int jumlahKendaraan) {
    double total = 0;

    for (int i = 0; i < jumlahKendaraan; i++) {
        total += biaya[i];
    }

    return total;
}

void cetakStrukKeFile(char nama[], char jenis[][20], int lama[], double biaya[], int jumlahKendaraan) {

    FILE *file = fopen("struk_parkir.txt", "w");

    if (file == NULL) {
        printf("Gagal membuat file!\n");
        return;
    }

    fprintf(file, "===== STRUK PARKIR =====\n");
    fprintf(file, "Nama Pelanggan : %s\n\n", nama);

    for (int i = 0; i < jumlahKendaraan; i++) {
        fprintf(file, "Kendaraan %d\n", i + 1);
        fprintf(file, "Jenis       : %s\n", jenis[i]);
        fprintf(file, "Lama Parkir : %d jam\n", lama[i]);
        fprintf(file, "Biaya       : Rp %.0f\n\n", biaya[i]);
    }

    double total = hitungTotal(biaya, jumlahKendaraan);

    fprintf(file, "Total Bayar : Rp %.0f\n", total);
    fprintf(file, "========================\n");

    fclose(file);

    printf("Struk berhasil disimpan ke file 'struk_parkir.txt'\n");
}

int main() {

    char nama[50];
    int jumlahKendaraan;

    char jenis[3][20];
    int lama[3];
    double biaya[3];

    printf("Masukkan nama pelanggan: ");
    scanf(" %[^\n]", nama);

    printf("Masukkan jumlah kendaraan (maks 3): ");
    scanf("%d", &jumlahKendaraan);

    if (jumlahKendaraan < 1 || jumlahKendaraan > 3) {
        printf("Jumlah kendaraan tidak valid!\n");
        return 0;
    }

    for (int i = 0; i < jumlahKendaraan; i++) {

        printf("\nKendaraan %d\n", i + 1);

        printf("Jenis kendaraan (mobil/motor/truk): ");
        scanf("%s", jenis[i]);

        printf("Lama parkir (jam): ");
        scanf("%d", &lama[i]);

        biaya[i] = hitungBiayaParkir(jenis[i], lama[i]);
    }

    cetakStrukKeFile(nama, jenis, lama, biaya, jumlahKendaraan);

    return 0;
}