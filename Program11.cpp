#include <stdio.h>

void angka(int *input) {
    printf("Masukkan sebuah angka integer: ");
    scanf("%d", input);
}

void dobel(int *nilai) {
    *nilai = *nilai * 2;
}


int main () {

    int bil;
    angka(&bil);
    dobel(&bil);

    printf("angka setelah dikalikan: %d\n", bil);
}