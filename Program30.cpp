#include <stdio.h>

int main() {
    int m, n, hasil;

    printf("=== Program Modulus (m mod n) ===\n");
    printf("Masukkan nilai m: ");
    scanf("%d", &m);
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Error: Pembagi tidak boleh nol!\n");
    } else {
        hasil = m % n;
        printf("%d mod %d = %d\n", m, n, hasil);
    }

    return 0;
}