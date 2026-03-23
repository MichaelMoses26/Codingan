#include <stdio.h>

int cekLogin(int user, int pass) {
    if (user == 123 && pass == 456)
        return 1;
    else
        return 0;
}

int main() {
    int user, pass;

    printf("Masukkan user: ");
    scanf("%d", &user);

    printf("Masukkan password: ");
    scanf("%d", &pass);

    int status = cekLogin(user, pass);

    if (status == 1) {
        printf("Login berhasil\n");
    } else {
        printf("Login gagal\n");
    }
}