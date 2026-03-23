#include <stdio.h>

void inputAbsen(int *absen, int n) {
    for(int i=0;i<n;i++) {
        printf("Hari ke-%d (1=hadir,0=tidak): ", i+1);
        scanf("%d", &absen[i]);
    }
}

int hitungHadir(int *absen, int n) {
    int count = 0;
    for(int i=0;i<n;i++) {
        if(absen[i] == 1) count++;
    }
    return count;
}

float hitungPersen(int hadir, int total) {
    return (float)hadir/total * 100;
}

int main() {
    int n = 5;
    int absen[10];

    inputAbsen(absen, n);

    int hadir = hitungHadir(absen, n);
    float persen = hitungPersen(hadir, n);

    printf("Hadir = %d hari\n", hadir);
    printf("Persentase = %.2f%%\n", persen);
}