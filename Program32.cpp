#include <stdio.h>

int main() {
    int pilihan;
    int suara1 = 0, suara2 = 0, suara3 = 0;
    int totalPemilih, i;

    printf("=== Sistem Voting ===\n");
    printf("1. Kandidat A\n");
    printf("2. Kandidat B\n");
    printf("3. Kandidat C\n");

    printf("Jumlah pemilih: ");
    scanf("%d", &totalPemilih);

    for(i = 0; i < totalPemilih; i++) {
        printf("Pemilih %d pilih (1-3): ", i+1);
        scanf("%d", &pilihan);

        if(pilihan == 1) suara1++;
        else if(pilihan == 2) suara2++;
        else if(pilihan == 3) suara3++;
        else printf("Pilihan tidak valid\n");
    }

    printf("\nHasil Voting:\n");
    printf("A: %d suara\n", suara1);
    printf("B: %d suara\n", suara2);
    printf("C: %d suara\n", suara3);

    if(suara1 > suara2 && suara1 > suara3)
        printf("Pemenang: Kandidat A\n");
    else if(suara2 > suara1 && suara2 > suara3)
        printf("Pemenang: Kandidat B\n");
    else if(suara3 > suara1 && suara3 > suara2)
        printf("Pemenang: Kandidat C\n");
    else
        printf("Hasil seri!\n");

    return 0;
}