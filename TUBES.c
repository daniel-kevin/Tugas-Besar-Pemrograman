#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int poin, barang, harga, total, diskon;

void TotalBelanja()
{
	printf("Masukan Jumlah Barang	=\n");
	scanf("%d", &barang);
	printf("Masukan Harga Barang	=\n");
	scanf("%d", &harga);
	total=barang*harga;
}
void Diskon()
{
	if (total >= 75000 && total < 900000){
		diskon = 10/100;
		total=total-(total*10/100);
		printf("\nSelamat Anda Mendapat Diskon sebesar 10 persen!\n");
	
	}
	else if (total >= 900000){
		diskon = 20/100;
		total=total-(total*20/100);
		printf("\nSelamat Anda Mendapat Diskon sebesar 20 persen!\n");
	}
	else 
	printf("\nMaaf, Anda tidak mendapat Diskon. Silakan Berbelanja dengan minimal pembelian total 50000.\n");
}

int hitung_poin (int total_belanja){
    int poin = total_belanja / 50000;
    return poin;
}
struct merchandise
{
    int point;
    char pilihan_warna[20];
};

void tukar_poin (int poin){
    int pilih,pil2,pilihan;
    struct merchandise gantungan_kunci,payung,boneka;
    gantungan_kunci.point = 2;
    payung.point=5;
    boneka.point=7;

    printf("Point total Anda : %d\n",poin);
    printf("Tukar point? (Ketik 1 untuk Ya dan 2 untuk Tidak)");
    scanf("%d",&pilihan);
    while(pilihan == 1 && poin > 0){
        printf("Ingin tukar point dengan apa?\n");
        printf("1.Gantungan kunci\n");
        printf("2.Payung\n");
        printf("3.Boneka\n");
        printf("Silakan masukkan angka dari pilihan :");
        scanf("%d",&pilih);

        if (pilih == 1){
            if( poin < gantungan_kunci.point){
                printf("Point Anda tidak mencukupi.\n");
                exit(1);
            }
            poin -= gantungan_kunci.point;
            printf("Anda mendapatkan gantungan kunci!\n");
            printf("Sisa point anda : %d\n",poin);
            printf("Tukar point lagi? (Ketik 1 untuk Ya dan 2 untuk Tidak)\n");
            scanf("%d",&pilihan);
        }
        else if(pilih == 2){
            if(poin < payung.point){
                printf("Point Anda tidak mencukupi.");
                exit(1);
            }
            printf("Silakan pilih warna merchandise anda:\n");
            printf("1.Merah\n");
            printf("2.Biru\n");
            printf("3.Hitam\n");
            printf("Silakan masukkan angka dari pilihan :");
            scanf("%d",&pil2);
            if(pil2 == 1){
                strcpy (payung.pilihan_warna,"Merah");
            }
            else if(pil2==2){
                strcpy (payung.pilihan_warna,"Biru");
            }
            else if(pil2==3){
                strcpy (payung.pilihan_warna,"Hitam");
            }
            else {
                printf("Pilih warna berdasarkan list yang ada (Masukkan Angka saja) : \n");
            }
            poin -= payung.point;
            printf("Anda mendapatkan Payung Berwarna : %s!\n",payung.pilihan_warna);
            printf("Sisa point anda : %d\n",poin);
            printf("Tukar point lagi? (Ketik 1 untuk Ya dan 2 untuk Tidak)\n");
            scanf("%d",&pilihan);
        }
        else if(pilih == 3){
            if(poin <boneka.point){
                printf("Point Anda tidak mencukupi.");
                exit(1);
            }
            poin -= boneka.point;
            printf("Anda mendapatkan Boneka Mascot!\n");
            printf("Sisa point Anda : %d\n",poin);
            printf("Tukar point lagi? (Ketik 1 untuk Ya dan 2 untuk Tidak)\n");
            scanf("%d",&pilihan);
    }
        }
	 if(poin == 0){
            printf("Point Anda sudah habis. Silakan lakukan transaksi lain untuk menambah point.\n");
        }
}

int main(){
	
	int pilihan1,point;
	TotalBelanja();
    point = hitung_poin(total);
	Diskon();
	printf("Total Pembelanjaan Anda adalah  = %d\n", total);
	printf("Ingin tukar point? (Ketik 1 untuk Ya)\n");
	scanf("%d",&pilihan1);

    if(pilihan1 == 1){
        
        tukar_poin(point);
    }
}


