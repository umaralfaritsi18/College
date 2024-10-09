#include <stdio.h>
#include <string.h>

// Definisi struct Murid
struct Murid {
    char nama[50];
    int umur;
    float nilai;
};

int main() {
    // Deklarasi variabel dengan tipe struct Murid
    struct Murid murid1;

    // Mengisi data untuk murid1
    strcpy(murid1.nama, "Umar Farouq Al Faritsi");
    murid1.umur = 27;
    murid1.nilai = 85.5;

    // Menampilkan data murid1
    printf("Nama: %s\n", murid1.nama);
    printf("Umur: %d\n", murid1.umur);
    printf("Nilai: %.2f\n", murid1.nilai);

    return 0;
}