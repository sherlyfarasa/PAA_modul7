#include <stdio.h>

// Fungsi untuk memindahkan gelang dari tiang asal ke tiang tujuan
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    // Base case: jika hanya ada satu gelang, pindahkan langsung ke tujuan
    if (n == 1) {
        printf("Pindahkan gelang 1 dari %c ke %c\n", from_rod, to_rod);
        return; // Keluar dari fungsi
    }
    // Pindahkan n-1 gelang dari tiang asal ke tiang bantu
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    // Pindahkan gelang ke-n dari tiang asal ke tujuan
    printf("Pindahkan gelang %d dari %c ke %c\n", n, from_rod, to_rod);
    // Pindahkan kembali n-1 gelang dari tiang bantu ke tujuan
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int T; // Jumlah ronde
    printf("Masukkan jumlah ronde: ");
    scanf("%d", &T);

    // Looping untuk setiap ronde
    for (int ronde = 1; ronde <= T; ++ronde) {
        int n; // Jumlah gelang awal di "Base of Power"
        printf("Masukkan jumlah gelang untuk ronde %d: ", ronde);
        scanf("%d", &n);

        printf("Ronde %d:\n", ronde);
        // Memanggil fungsi towerOfHanoi untuk memindahkan gelang
        towerOfHanoi(n, 'A', 'C', 'B'); // Memindahkan gelang dari tiang A ke tiang C dengan bantuan tiang B
        printf("\n");
    }

    return 0;
}
