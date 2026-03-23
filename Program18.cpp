#include <stdio.h>

int main () {
    int pin, konfirmasi, input, percobaan = 0;

    do {
    printf("Masukkan PIN (4 digit): ");
    scanf("%d", &pin);

    if (pin < 1000 || pin > 9999) {
        printf("Error.\n");
        continue;
    }

        printf("Simpan PIN? (1 = Ya, 0 = Tidak): ");
        scanf("%d", &konfirmasi);

    if (konfirmasi == 0) {
        printf("PIN tidak disimpan.\n");
    }
       }
    while (konfirmasi != 1);

    while (percobaan < 3) {
        printf("Masukkan PIN untuk verifikasi: ");
        scanf("%d", &input);

        if (input == pin) {
           printf("Akses diterima.\n");
           return 0;
        } else {
            printf("PIN salah.\n");
        }
        percobaan++;
    }

    printf("Kartu Anda Diblokir\n");
    
    return 0;
}
