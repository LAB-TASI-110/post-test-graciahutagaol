#include <stdio.h>
#include <string.h>

int main() {

    int stokNasi = 20;
    int stokAyam = 15;
    int stokMie = 10;

    int pilihanMenu, jumlah;
    int harga = 0;
    int total = 0;
    int metodeBayar;
    int nomorAntrean = 1;
    char nama[50];

    printf("=====================================\n");
    printf("     SISTEM KAFETARIA IT DEL\n");
    printf("=====================================\n\n");

    printf("Masukkan Nama Pelanggan : ");
    scanf("%s", nama);

    printf("\nNomor Antrean Anda : %d\n", nomorAntrean);

    printf("\n===== MENU MAKANAN =====\n");
    printf("1. Nasi Goreng   (Rp15000)\n");
    printf("2. Ayam Geprek   (Rp12000)\n");
    printf("3. Mie Goreng    (Rp10000)\n");
    printf("=========================\n");

    printf("Pilih Menu : ");
    scanf("%d", &pilihanMenu);

    printf("Jumlah Pesanan : ");
    scanf("%d", &jumlah);

    if(pilihanMenu == 1){
        harga = 15000;
        if(stokNasi >= jumlah){
            stokNasi -= jumlah;
        } else{
            printf("Stok Nasi Goreng tidak cukup!\n");
            return 0;
        }
    }

    else if(pilihanMenu == 2){
        harga = 12000;
        if(stokAyam >= jumlah){
            stokAyam -= jumlah;
        } else{
            printf("Stok Ayam Geprek tidak cukup!\n");
            return 0;
        }
    }

    else if(pilihanMenu == 3){
        harga = 10000;
        if(stokMie >= jumlah){
            stokMie -= jumlah;
        } else{
            printf("Stok Mie Goreng tidak cukup!\n");
            return 0;
        }
    }

    else{
        printf("Menu tidak tersedia!\n");
        return 0;
    }

    total = harga * jumlah;

    printf("\nTotal Harga : Rp%d\n", total);

    printf("\n===== METODE PEMBAYARAN =====\n");
    printf("1. Cash\n");
    printf("2. Transfer\n");
    printf("3. QRIS\n");
    printf("==============================\n");

    printf("Pilih Metode Pembayaran : ");
    scanf("%d", &metodeBayar);

    if(metodeBayar == 1){
        printf("\nPembayaran Cash diterima\n");
    }
    else if(metodeBayar == 2){
        printf("\nSilakan transfer ke rekening kafetaria\n");
    }
    else if(metodeBayar == 3){
        printf("\nSilakan scan QRIS untuk pembayaran\n");
    }
    else{
        printf("\nMetode tidak valid\n");
        return 0;
    }

    printf("\n=====================================\n");
    printf("          STRUK PEMBELIAN\n");
    printf("=====================================\n");
    printf("Nama        : %s\n", nama);
    printf("Jumlah      : %d\n", jumlah);
    printf("Total       : Rp%d\n", total);
    printf("Nomor Antri : %d\n", nomorAntrean);
    printf("=====================================\n");

    printf("\nSisa Stok Saat Ini:\n");
    printf("Nasi Goreng : %d\n", stokNasi);
    printf("Ayam Geprek : %d\n", stokAyam);
    printf("Mie Goreng  : %d\n", stokMie);

    printf("\nTerima kasih telah memesan di Kafetaria IT Del\n");

    return 0;
}