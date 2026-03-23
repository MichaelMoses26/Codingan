#include <stdio.h>

int main() {
float Diameter, Jari_jari, Luas, Keliling;
const float phi = 3.14;

printf("Masukkan diameter lingkaran: ");
scanf("%f", &Diameter);

Jari_jari = Diameter/2;
Luas = phi * Jari_jari * Jari_jari;
Keliling = phi * Diameter;


printf("Jari jari lingkaran: %.2f\n", Jari_jari);
printf("Luas lingkaran: %.2f\n", Luas);
printf("Keliling lingkaran: %.2f\n", Keliling);

return 0;

}