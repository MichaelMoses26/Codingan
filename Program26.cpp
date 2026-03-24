#include <stdio.h>

int hitungPositif(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int hitungNegatif(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, arr[100];

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int positif = hitungPositif(arr, n);
    int negatif = hitungNegatif(arr, n);

    printf("Jumlah angka positif = %d\n", positif);
    printf("Jumlah angka negatif = %d\n", negatif);

    return 0;
}