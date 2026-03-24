#include <stdio.h>

int hitungJam(int detik) {
    return detik / 3600;
}

int hitungMenit(int detik) {
    detik = detik % 3600;
    return detik / 60;
}

int hitungDetik(int detik) {
    detik = detik % 3600;
    detik = detik % 60;
    return detik;
}

int main() {
    int totalDetik;
    int jam, menit, detik;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &totalDetik);

    jam = hitungJam(totalDetik);
    menit = hitungMenit(totalDetik);
    detik = hitungDetik(totalDetik);

    printf("Hasil: %d jam %d menit %d detik\n", jam, menit, detik);

    return 0;
}