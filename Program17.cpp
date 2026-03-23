#include <stdio.h>

int cekPin(int pin) {
    if(pin == 1234)
        return 1;
    else
        return 0;
}

int main() {
    int pin, pilih, saldo = 100000;

    printf("Masukkan PIN: ");
    scanf("%d", &pin);

    if (cekPin(pin) == 1) {
        printf("1. Cek Saldo\n2. Tarik Tunai\n");
        scanf("%d", &pilih);

        if (pilih == 1) {
            printf("Saldo = %d\n", saldo);
        } else if (pilih == 2) {
            int tarik;
            printf("Jumlah tarik: ");
            scanf("%d", &tarik);

            if (tarik <= saldo) {
                saldo -= tarik;
                printf("Sisa saldo = %d\n", saldo);
            } else {
                printf("Saldo tidak cukup\n");
            }
        } else {
            printf("Menu tidak valid\n");
        }
    } else {
        printf("PIN salah\n");
    }
}