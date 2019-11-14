#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct buku{
	int kode_buku;
	char nama_buku[15];
	char tahun_buku[4];
};
int main() {
	struct buku mhs[8];
	
	int i;
	
	mhs[0].kode_buku = 1025;
	strcpy(mhs[0].nama_buku, "Visual Basic");
	strcpy(mhs[0].tahun_buku, "2005");
	
	mhs[1].kode_buku = 1027;
	strcpy(mhs[1].nama_buku, "Pororo");
	strcpy(mhs[1].tahun_buku, "2004");
	
	mhs[2].kode_buku = 1029;
	strcpy(mhs[2].nama_buku, "Dipsy");
	strcpy(mhs[2].tahun_buku, "2015");
	
	mhs[3].kode_buku = 1031;
	strcpy(mhs[3].nama_buku, "Visual");
	strcpy(mhs[3].tahun_buku, "2005");
	
	mhs[4].kode_buku = 1033;
	strcpy(mhs[4].nama_buku, "Basic");
	strcpy(mhs[4].tahun_buku, "2005");
	
	mhs[5].kode_buku = 1035;
	strcpy(mhs[5].nama_buku, "Lala");
	strcpy(mhs[5].tahun_buku, "2005");
	
	mhs[6].kode_buku = 1037;
	strcpy(mhs[6].nama_buku, "Poo");
	strcpy(mhs[6].tahun_buku, "2005");
	
	mhs[7].kode_buku = 1039;
	strcpy(mhs[7].nama_buku, "Thingky Wingky");
	strcpy(mhs[7].tahun_buku, "2005");
	
	int cari;
	printf("Masukkan Kode Buku yang akan dicari : ");
	scanf("%d", &cari);
	
	int posisi,n;
	int low =0;
	int high = 7; 
	while(low < high && cari > mhs[cari].kode_buku && cari < mhs[high].kode_buku){
		posisi = ((cari - mhs[low].kode_buku)/(mhs[high].kode_buku - mhs[low].kode_buku))*((high-low)+low);
		printf("Posisi %d \n",posisi);
		
		if(mhs[posisi].kode_buku == cari){
			printf("Data Ditemukan");
			break;
		}	else if (cari > mhs[posisi].kode_buku){
			low = posisi+1;
		} else if (cari < mhs[posisi].kode_buku){
			high = posisi -1;
		}
	}

	
//	while (low<=high){
//	
//	if(mhs[posisi].kode_buku == cari){
 //	printf("Kode Buku : %d, Nama Buku : %s, Tahun Buku : %s\n", mhs[high].kode_buku, mhs[high].nama_buku, mhs[high].tahun_buku);	
//	break;
//	}
//	else if(mhs[posisi].kode_buku< cari)
//	{
//		low = posisi+1;
//		break;
//	}	
//	}

//	if(mhs[posisi].kode_buku > cari){
//	high = posisi-1;
//	printf("Kode Buku : %d, Nama Buku : %s, Tahun Buku : %s\n", mhs[high].kode_buku, mhs[high].nama_buku, mhs[high].tahun_buku);	
//	}
//	else if(mhs[posisi].kode_buku< cari)
//	{
//		low = posisi+1;
//	}
	
	for(i=0;i<=7;i++){
		
		printf("Kode Buku : %d, Nama Buku : %s, Tahun Buku : %s\n", mhs[i].kode_buku, mhs[i].nama_buku, mhs[i].tahun_buku);
	}
	return 0;
}
