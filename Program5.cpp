#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 80)
        printf("A\n");
    else if (nilai >= 70)
        printf("B\n");
    else if (nilai >= 60)
        printf("C\n");
    else
        printf("D\n");

    return 0;
}