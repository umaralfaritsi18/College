#include <stdio.h>

int main() {
    int nilai[5];        // Array untuk menyimpan 5 nilai ujian
    int *ptr;            // Pointer untuk mengakses array
    int i;
    int max, min;
    float rata_rata, total = 0;

    // Meminta pengguna memasukkan 5 nilai ujian
    printf("Masukkan 5 nilai ujian:\n");
    for(i = 0; i < 5; i++) {
        printf("Nilai ujian ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
    }

    // Inisialisasi pointer ke array nilai
    ptr = nilai;

    // Inisialisasi nilai tertinggi dan terendah dengan nilai pertama
    max = *ptr;
    min = *ptr;

    // Menghitung nilai tertinggi, terendah, dan total menggunakan pointer
    for(i = 0; i < 5; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);   // Update nilai tertinggi
        }
        if(*(ptr + i) < min) {
            min = *(ptr + i);   // Update nilai terendah
        }
        total += *(ptr + i);    // Menambah nilai ke total
    }

    // Menghitung rata-rata
    rata_rata = total / 5;

    // Menampilkan hasil
    printf("\nNilai tertinggi: %d\n", max);
    printf("Nilai terendah: %d\n", min);
    printf("Rata-rata nilai: %.2f\n", rata_rata);

    return 0;
}
