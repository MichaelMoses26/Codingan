#include <stdio.h>

void tambahDetik(int jam, int menit, int detik) {
    detik++;

    if(detik == 60) {
        detik = 0;
        menit++;
    }

    if(menit == 60) {
        menit = 0;
        jam++;
    }

    if(jam == 24) {
        jam = 0;
    }

    printf("Waktu setelah +1 detik: %02d:%02d:%02d\n", jam, menit, detik);
}

int main() {
    int jam, menit, detik;

    printf("Masukkan jam menit detik: ");
    scanf("%d %d %d", &jam, &menit, &detik);

    tambahDetik(jam, menit, detik);

    return 0;
}