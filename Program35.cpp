#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateSoal(int *a, int *b) {
    *a = rand() % 10;
    *b = rand() % 10;
    return *a + *b;
}

int main() {
    int a, b, jawaban, benar;
    int skor = 0, i;

    srand(time(NULL));

    printf("=== Math Quiz ===\n");

    for(i = 0; i < 5; i++) {
        benar = generateSoal(&a, &b);

        printf("%d + %d = ", a, b);
        scanf("%d", &jawaban);

        if(jawaban == benar) {
            printf("Benar!\n");
            skor += 10;
        } else {
            printf("Salah!\n");
        }
    }

    printf("Skor: %d\n", skor);

    return 0;
}