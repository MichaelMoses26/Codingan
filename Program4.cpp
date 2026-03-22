#include <stdio.h>

int main() {
    int n;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Bilangan Genap\n");
    else
        printf("Bilangan Ganjil\n");

    return 0;
}