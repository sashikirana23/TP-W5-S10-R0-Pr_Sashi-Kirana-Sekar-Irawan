#include <stdio.h>
//2802685516_Sashi Kirana Sekar Irawan
//tugas 2

int main() {
    int nilai[5];            // Array untuk menyimpan nilai ujian
    int i, tertinggi, terendah, total = 0;
    float rataRata;
    int *ptr;                // Pointer untuk mengakses array
    ptr = nilai;             // Pointer menunjuk ke array

    // Input 5 nilai ujian
    printf("Masukkan 5 nilai ujian:\n");
    for (i = 0; i < 5; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", (ptr + i));  // Menggunakan pointer untuk input
    }

    // Inisialisasi nilai tertinggi dan terendah
    tertinggi = *(ptr);
    terendah = *(ptr);

    // Proses: Hitung total, cari tertinggi & terendah dengan if-else
    for (i = 0; i < 5; i++) {
        if (*(ptr + i) > tertinggi) {
            tertinggi = *(ptr + i);
        } else if (*(ptr + i) < terendah) {
            terendah = *(ptr + i);
        } else {
            // Jika nilai sama dengan tertinggi atau terendah maka tidak ada perubahan
            printf("Nilai ke-%d (%d) tidak mempengaruhi tertinggi/terendah.\n", i + 1, *(ptr + i));
        }
        total += *(ptr + i);
    }

    // Hitung rata-rata
    rataRata = (float)total / 5;

    // Output hasil
    printf("\n=== Hasil Perhitungan Nilai Ujian ===\n");
    printf("Nilai Tertinggi : %d\n", tertinggi);
    printf("Nilai Terendah  : %d\n", terendah);
    printf("Rata-rata       : %.2f\n", rataRata);

    return 0;
}