#include <stdio.h>

float operasi_pertambahan(float num1, float num2)
{
    float pertambahan = num1 + num2;
    return pertambahan;
}

float operasi_pengurangan(float num1, float num2)
{
    float pengurangan = num1 - num2;
    return pengurangan;
}

float operasi_perkalian(float num1, float num2)
{
    float perkalian = num1 * num2;
    return perkalian;
}

float operasi_pembagian(float num1, float num2)
{
    if (num2 == 0) {
        printf("Error, pembagi tidak boleh 0.\n");
        return 0; 
    } else {
        float pembagian = num1 / num2;
        return pembagian;
    }
}

int main() {
    float x, y, hasil;
    char operasi, ulang;

    do {
        printf("Masukkan nilai pertama: ");
        scanf("%f", &x);

        printf("Masukkan nilai kedua: ");
        scanf("%f", &y);

        printf("Masukkan operasi yang diinginkan (+ - * /): ");
        scanf(" %c", &operasi); 

        switch (operasi) {
            case '+':
                hasil = operasi_pertambahan(x, y);
                break;
            case '-':
                hasil = operasi_pengurangan(x, y);
                break;
            case '*':
                hasil = operasi_perkalian(x, y);
                break;
            case '/':
                hasil = operasi_pembagian(x, y);
                break; 
            default:
                printf("Operasi tidak valid\n");
                continue;
        }

        printf("Hasil = %.2f\n", hasil);

        printf("Apakah anda ingin menghitung lagi (y/n)? ");
        scanf(" %c", &ulang);

    } while (ulang == 'y');

    return 0;
}
