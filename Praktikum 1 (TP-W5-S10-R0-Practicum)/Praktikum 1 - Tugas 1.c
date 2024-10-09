#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menampung tiga bilangan bulat
    int bil1, bil2, bil3;
    int jumlah, kurang, kali;
    float bagi, ratarata;

    // Meminta input dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);
    
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);
    
    printf("Masukkan bilangan ketiga: ");
    scanf("%d", &bil3);

    // Melakukan operasi aritmatika dasar
    jumlah = bil1 + bil2 + bil3;
    kurang = bil1 - bil2 - bil3;
    kali = bil1 * bil2 * bil3;

    // Pembagian (cek jika ada pembagi nol)
    if (bil2 != 0 && bil3 != 0) {
        bagi = (float)bil1 / bil2 / bil3;
    } else {
        bagi = 0; // Jika ada pembagi nol, hasil pembagian diset ke 0
    }

    // Menghitung rata-rata
    ratarata = (float)jumlah / 3;

    // Menampilkan hasil operasi
    printf("\nHasil Operasi Aritmatika:\n");
    printf("Penjumlahan: %d + %d + %d = %d\n", bil1, bil2, bil3, jumlah);
    printf("Pengurangan: %d - %d - %d = %d\n", bil1, bil2, bil3, kurang);
    printf("Perkalian: %d * %d * %d = %d\n", bil1, bil2, bil3, kali);
    if (bil2 != 0 && bil3 != 0) {
        printf("Pembagian: %d / %d / %d = %.2f\n", bil1, bil2, bil3, bagi);
    } else {
        printf("Pembagian: Tidak dapat melakukan pembagian dengan nol.\n");
    }
    printf("Rata-rata: %.2f\n", ratarata);

    return 0;
}
