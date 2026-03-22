#include <stdio.h>

int main () {
    char lampu;

    printf("Masukkan kode lampu (M = Merah, K = Kuning, H = Hijau): ");
    scanf("%c", &lampu);

    switch (lampu) {
        case 'M':
        printf("Berhenti.\n");
        break;
        case 'K':
        printf("Pelan-pelan.\n");
        break;
        case 'H':
        printf("Jalan.\n");
        break;
        default:
        printf("input tidak valid.\n");
    }

    return 0;
}