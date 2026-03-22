#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Masukkan jumlah deret: ");
    scanf("%d", &n);

    printf("Fibonacci: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}