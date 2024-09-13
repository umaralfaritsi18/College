#include <stdio.h>

int main() {
    float gajiKotor, pajak, gajiBersih;

    // Input gaji kotor dari pengguna
    printf("Masukkan gaji kotor: ");
    scanf("%f", &gajiKotor);

    // Hitung pajak sebesar 10%
    pajak = gajiKotor * 0.10;

    // Hitung gaji bersih
    gajiBersih = gajiKotor - pajak;

    // Output gaji bersih
    printf("Gaji bersih setelah dipotong pajak: %.2f\n", gajiBersih);

    return 0;
}