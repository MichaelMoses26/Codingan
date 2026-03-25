#include <stdio.h>
#include <string.h>

int main() {
    char tugas[100][100];
    int jumlah = 0;
    int pilihan, i, hapus;

    do {
        printf("\n=== TO-DO LIST ===\n");
        printf("1. Tambah\n2. Lihat\n3. Hapus\n4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Masukkan tugas: ");
                scanf(" %[^\n]", tugas[jumlah]);
                jumlah++;
                break;

            case 2:
                for(i = 0; i < jumlah; i++) {
                    printf("%d. %s\n", i+1, tugas[i]);
                }
                break;

            case 3:
                printf("Hapus nomor: ");
                scanf("%d", &hapus);
                for(i = hapus-1; i < jumlah-1; i++) {
                    strcpy(tugas[i], tugas[i+1]);
                }
                jumlah--;
                break;
        }

    } while(pilihan != 4);

    return 0;
}