#include <stdio.h>
//2802685516_Sashi Kirana Sekar Irawan
//tugas 1

// Fungsi untuk menghitung rata-rata
float hitungRataRata(int x, int y, int z) {
    return (x + y + z) / 3.0;
}

int main() {
    int a, b, c;
    int jumlah, kurang, kali;
    float bagi, rata_rata;

    // Input dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    printf("Masukkan bilangan ketiga: ");
    scanf("%d", &c);

    // Operasi matematika
    jumlah = a + b + c;
    kurang = a - b - c;
    kali = a * b * c;

    // Pembagian dipisahkan untuk menghindari pembagian oleh nol
    if (b != 0 && c != 0) {
        bagi = (float)a / b / c;
    } else {
        printf("\nPembagian tidak dapat dilakukan karena ada bilangan pembagi nol.\n");
        bagi = 0.0;
    }

    rata_rata = hitungRataRata(a, b, c);

    // Menampilkan hasil
    printf("\n=== Hasil Perhitungan ===\n");
    printf("Penjumlahan    : %d\n", jumlah);
    printf("Pengurangan    : %d\n", kurang);
    printf("Perkalian      : %d\n", kali);
    if (b != 0 && c != 0) {
        printf("Pembagian      : %.2f\n", bagi);
    }
    printf("Rata-rata      : %.2f\n", rata_rata);

    return 0;
}

