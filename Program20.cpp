#include <stdio.h>

int cekDewasa(int umur) {
    if (umur >= 17)
        return 1;
    else
        return 0;
}

int main() {
    int umur;
    printf("Masukkan umur: ");
    scanf("%d", &umur);

    int status = cekDewasa(umur);

    if (status == 1) {
        printf("Dewasa\n");
    } else {
        printf("Belum dewasa\n");
    }
}