#include <stdio.h>

int main () {
    int usia, praktek, teori;

    printf("Masukkan usia anda: ");
    scanf("%d", &usia);

    printf("Apakah anda lulus ujian praktek (Ya = 1, No = 0): ");
    scanf("%d", &praktek);

    printf("Masukkan nilai ujian teori: ");
    scanf("%d", &teori);

    if (usia >= 16 && praktek == 1 && teori >= 75) {
        printf("Anda lulus, SIM dapat dibuat.\n");
    }
    else {
        printf("Anda tidak lulus, mohon coba lagi di lain kesempatan.\n");
    }

    return 0;
} 