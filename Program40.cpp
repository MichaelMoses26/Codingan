#include <stdio.h>

void tampilkanKamar(int statusKamar[], int jumlahKamar) {
    int i;
    printf("\nSTATUS KAMAR APARTEMEN\n");
    for (i = 0; i < jumlahKamar; i++) {
        printf("Kamar %d : ", i + 1);
        if (statusKamar[i] == 0) {
            printf("Kosong\n");
        } else {
            printf("Terisi\n");
        }
    }
}

void sewaKamar(int statusKamar[], int jumlahKamar) {
    int nomorKamar;

    printf("\nMasukkan nomor kamar (1-%d): ", jumlahKamar);
    scanf("%d", &nomorKamar);

    if (nomorKamar < 1 || nomorKamar > jumlahKamar) {
        printf("Nomor kamar tidak valid\n");
        return;
    }

    if (statusKamar[nomorKamar - 1] == 1) {
        printf("Kamar sudah ditempati\n");
    } else {
        statusKamar[nomorKamar - 1] = 1;
        printf("Kamar berhasil disewa\n");
    }
}

int main() {
    int jumlahKamar = 5;
    int statusKamar[5] = {0, 0, 0, 0, 0};
    int pilihanMenu;

    do {
        printf("\nMENU APARTEMEN\n");
        printf("1. Lihat kamar\n");
        printf("2. Sewa kamar\n");
        printf("3. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihanMenu);

        if (pilihanMenu == 1) {
            tampilkanKamar(statusKamar, jumlahKamar);
        } else if (pilihanMenu == 2) {
            sewaKamar(statusKamar, jumlahKamar);
        } else if (pilihanMenu == 3) {
            printf("Terima kasih\n");
        } else {
            printf("Pilihan tidak valid\n");
        }

    } while (pilihanMenu != 3);

    return 0;
}