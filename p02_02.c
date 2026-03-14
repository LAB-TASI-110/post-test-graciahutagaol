#include <stdio.h>
#include <string.h>

int main() {
    int N;
    int stok;
    int total = 0;
    char kategori[50];
    char cari[50];

    // Input jumlah data
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    // Input kategori yang ingin dihitung
    printf("Masukkan kategori yang dicari: ");
    scanf("%s", cari);

    // Input data barang
    for(int i = 0; i < N; i++) {
        printf("Masukkan kategori barang: ");
        scanf("%s", kategori);

        printf("Masukkan jumlah stok: ");
        scanf("%d", &stok);

        // Jika kategori sama dengan yang dicari
        if(strcmp(kategori, cari) == 0) {
            total += stok;
        }
    }

    // Output total stok
    printf("Total stok kategori %s = %d\n", cari, total);

    return 0;
}