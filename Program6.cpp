#include <stdio.h>

int main () {
    float Harga_barang, Biaya_transport, Pajak_PPH, Biaya_sewa, Margin_keuntungan, Biaya_total;

    printf("Masukkan harga barang:" );
    scanf("%f", &Harga_barang);

    Biaya_transport = Harga_barang * 0.15;
    Pajak_PPH = Harga_barang * 0.10;
    Biaya_sewa = Harga_barang * 0.20;
    Margin_keuntungan = Harga_barang * 0.10;
    Biaya_total = Harga_barang + Biaya_transport + Pajak_PPH + Biaya_sewa + Margin_keuntungan;

    printf("Total harga barang: %.2f\n", Biaya_total);

    return 0;
}
