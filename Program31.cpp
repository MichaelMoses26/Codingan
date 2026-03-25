#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, komputer;

    srand(time(NULL));

    printf("=== Batu Gunting Kertas ===\n");
    printf("1. Batu\n2. Gunting\n3. Kertas\n");
    printf("Pilih: ");
    scanf("%d", &user);

    komputer = rand() % 3 + 1;

    printf("Pilihan komputer: %d\n", komputer);

    if(user == komputer) {
        printf("Seri!\n");
    } else if(
        (user == 1 && komputer == 2) ||
        (user == 2 && komputer == 3) ||
        (user == 3 && komputer == 1)
    ) {
        printf("Kamu menang!\n");
    } else {
        printf("Kamu kalah!\n");
    }

    return 0;
}