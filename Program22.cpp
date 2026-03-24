#include <stdio.h>

int jumlahN(int n) {
    int total = 0;
    for(int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main() {
    int n;

    printf("Masukkan nilai N: ");
    scanf("%d", &n);

    printf("Jumlah = %d\n", jumlahN(n));

    return 0;
}