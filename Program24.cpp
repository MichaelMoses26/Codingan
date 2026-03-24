#include <stdio.h>

int hitungGenap(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int hitungGanjil(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int jumlahTotal(int arr[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int n;
    int arr[100];

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Jumlah genap = %d\n", hitungGenap(arr, n));
    printf("Jumlah ganjil = %d\n", hitungGanjil(arr, n));
    printf("Total = %d\n", jumlahTotal(arr, n));

    return 0;
}