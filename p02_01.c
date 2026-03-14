#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    char kota[20];
    int ongkir = 0;
    char keterangan[20];

    float beratButet;
    float beratUcok;
    float totalBerat;
    float totalOngkir;

    printf("=== Program Del-Express ===\n");

    while(1) {

        printf("\nMasukkan kode kota (MDN/BLG/JKT/SBY atau END): ");
        scanf("%s", kode);

        if(strcmp(kode, "END") == 0) {
            printf("\nProgram selesai.\n");
            break;
        }

        printf("Masukkan berat paket Butet (kg): ");
        scanf("%f", &beratButet);

        // Berat Ucok
        beratUcok = 1.5 * beratButet;

        // Total berat
        totalBerat = beratButet + beratUcok;

        // Menentukan kota dan tarif
        if(strcmp(kode, "MDN") == 0){
            strcpy(kota,"Medan");
            ongkir = 8000;
            strcpy(keterangan,"Dalam Pulau");
        }
        else if(strcmp(kode, "BLG") == 0){
            strcpy(kota,"Balige");
            ongkir = 5000;
            strcpy(keterangan,"Dalam Pulau");
        }
        else if(strcmp(kode, "JKT") == 0){
            strcpy(kota,"Jakarta");
            ongkir = 12000;
            strcpy(keterangan,"Luar Pulau");
        }
        else if(strcmp(kode, "SBY") == 0){
            strcpy(kota,"Surabaya");
            ongkir = 13000;
            strcpy(keterangan,"Luar Pulau");
        }
        else{
            printf("Kode kota tidak ditemukan!\n");
            continue;
        }

        // Hitung ongkir
        totalOngkir = totalBerat * ongkir;

        // Promo diskon
        if(totalBerat > 10){
            totalOngkir = totalOngkir * 0.9;
        }

        printf("\n===== STRUK PEMBAYARAN =====\n");
        printf("Kota Tujuan        : %s\n", kota);
        printf("Berat Butet        : %.2f kg\n", beratButet);
        printf("Berat Ucok         : %.2f kg\n", beratUcok);
        printf("Total Berat        : %.2f kg\n", totalBerat);
        printf("Total Ongkir       : Rp %.0f\n", totalOngkir);

        printf("Promo Diperoleh    : ");

        if(totalBerat > 10){
            printf("Diskon 10%% ");
        }

        if(strcmp(keterangan,"Luar Pulau")==0){
            printf("+ Asuransi Gratis");
        }

        printf("\n");
    }

    return 0;
}