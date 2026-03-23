#include <stdio.h>

void inputJam(int jam[], int n) {
    for(int i=0;i<n;i++) {
        printf("Jam kerja karyawan %d: ", i+1);
        scanf("%d", &jam[i]);
    }
}

int hitungGaji(int jam[], int n) {
    int total = 0;
    for(int i=0;i<n;i++) {
        if(jam[i] > 8)
            total += 50000 + (jam[i]-8)*10000;
        else
            total += 50000;
    }
    return total;
}

int main() {
    int jam[5];
    int n = 3;

    inputJam(jam, n);
    printf("Total gaji = %d\n", hitungGaji(jam,n));
}