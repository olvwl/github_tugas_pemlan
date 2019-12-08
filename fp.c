#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int index_data=0;
int jenis_kendaraan;
int tujuan1;

//ini struct
struct data 
{
	int nomortiket;
	char kendaraan[10];
	int bobot;
	char tujuan[20];
	//ini nesting struct
	struct 
	{
		int tgl,bln,thn;
	}date;	
	//ini nesting struct
	struct 
	{
		char kodewilayah[4],nopol[5],kodeseri[4];
	}nomorpolisi;
};
typedef struct data tiket;
	tiket masuk[50];

//void buat namabh data
void tambahdata()
{
	printf("Masukkan Nomor Tiket : ");
	scanf("%d",&masuk[index_data].nomortiket);
	printf("Masukkan Tanggal Masuk kendaraan : ");
	scanf("%d",&masuk[index_data].date.tgl);
	printf("Masukkan Bulan Masuk Kendaraan : ");
	scanf("%d",&masuk[index_data].date.bln);
	printf("Masukkan Tahun Masuk Kendaraan : ");
	scanf("%d",&masuk[index_data].date.thn);
	printf("Masukkan Nomor Kendaraan (Kode Wilayah) : ");
	scanf("%s",&masuk[index_data].nomorpolisi.kodewilayah);
	printf("Masukkan Nomor Kendaraan (No Polisi) : ");
	scanf("%s",&masuk[index_data].nomorpolisi.nopol);
	printf("Masukkan Nomor Kendaraan (Kode Seri Terakhir) : ");
	scanf("%s",&masuk[index_data].nomorpolisi.kodeseri);
	printf("Jenis Kendaraan : \n");
	printf("1. Truk\n");
	printf("2. Bus\n");
	printf("3. Minibus\n");
	printf("4. Motor\n");
	printf("5. Mobil\n");
	printf("Masukkan Jenis Kendaraan : ");
	scanf("%d",&jenis_kendaraan);
	if (jenis_kendaraan == 1)
	{
		strcpy (masuk[index_data].kendaraan,"Truk");
	} else if (jenis_kendaraan == 2)
	{
		strcpy (masuk[index_data].kendaraan,"Bus");
	} else if (jenis_kendaraan == 3) 
	{
		strcpy (masuk[index_data].kendaraan,"Minibus");
	} else if (jenis_kendaraan == 4)
	{
		strcpy (masuk[index_data].kendaraan,"Motor");
	} else if (jenis_kendaraan == 5)
	{
		strcpy (masuk[index_data].kendaraan,"Mobil");
	}
	printf("Tujuan yang Tersedia : \n");
	printf("1. Ketapang\n");
	printf("2. Padang Bai\n");
	printf("3. Lembar\n");
	printf("4. Tanjung Perak\n");
	printf("Masukkan Tujuan : ");
	scanf("%d",&tujuan1);
	if (tujuan1 == 1)
	{
		strcpy (masuk[index_data].tujuan,"Ketapang");
	} else if (tujuan1 == 2)
	{
		strcpy (masuk[index_data].tujuan,"Padang Bai");
	} else if (tujuan1 == 3) 
	{
		strcpy (masuk[index_data].tujuan,"Lembar");
	} else if (tujuan1 == 4)
	{
		strcpy (masuk[index_data].tujuan,"Tanjung Perak");
	} 
	printf("Masukkan Bobot Kendaraan : ");
	scanf("%d",&masuk[index_data].bobot);
	index_data=index_data+1;
}
//buat lihat data
void lihatdata()
{
	int i;
	if (index_data == 0)
	{
		printf("Data Penumpang Kosong\n\n");
	}else 
	{
		for(i=0;i<index_data;i++)
		{
		printf("=================================================\n");
		printf("		Data Penumpang\n");
		printf("=================================================\n");
		printf("Nomor Tiket : %d\n", masuk[i].nomortiket);
		printf("Tanggal Masuk : %d / %d  / %d\n", masuk[i].date.tgl, masuk[i].date.bln, masuk[i].date.thn);
		printf("Nomor Kendaraan : %s %s %s \n", masuk[i].nomorpolisi.kodewilayah, masuk[i].nomorpolisi.nopol, masuk[i].nomorpolisi.kodeseri);
		printf("Tujuan : %s \n", masuk[i].tujuan);
		printf("Jenis Kendaraan : %s\n", masuk[i].kendaraan);
		printf("Bobot Kendaraan : %d ton\n\n\n", masuk[i].bobot);
		}
	}
}

//pencarian berdasarkan nomor tiket

void caritiket(){
	int cari;
	int awal = 0;
	int akhir = index_data;
	int tengah = (awal+akhir)/2;
 	
 	printf("Masukkan Nomor tiket yang dicari : ");
 	scanf("%d",&cari);
 	
	while(awal<=akhir)
	{
    	if (masuk[tengah].nomortiket < cari)
    	{
    		awal = tengah + 1;    
    	}
		else if (masuk[tengah].nomortiket == cari) 
		{
        	printf("Angka %d berada pada array indeks ke %d.\n", cari, tengah+1);
        	printf("=================================================\n");
			printf("		Data Penumpang\n");
			printf("=================================================\n");
			printf("Nomor Tiket : %d\n", masuk[tengah].nomortiket);
			printf("Tanggal Masuk : %d / %d  / %d\n", masuk[tengah].date.tgl, masuk[tengah].date.bln, masuk[tengah].date.thn);
			printf("Nomor Kendaraan : %s %s %s \n", masuk[tengah].nomorpolisi.kodewilayah, masuk[tengah].nomorpolisi.nopol, masuk[tengah].nomorpolisi.kodeseri);
			printf("Tujuan : %s \n", masuk[tengah].tujuan);
			printf("Jenis Kendaraan : %s\n", masuk[tengah].kendaraan);
			printf("Bobot Kendaraan : %d ton\n\n\n", masuk[tengah].bobot);
        	break;
      	}
      	else{
        	akhir = tengah - 1;
    	}
    	tengah = (awal + akhir)/2;
   }
   
	if (awal > akhir)
		printf("Data %d tidak ditemukan.\n", cari);
}

void ubah()
{
	int baru;
	int a=0;
	lihatdata();
	if (index_data == 0)
	{
		printf("Data Penumpang Kosong\n\n");	
	} else {
	printf("Masukkan Nomor tiket yang akan diubah datanya : ");
	scanf("%d",&baru);
		
	while (baru != masuk[a].nomortiket)
	{
		a = a+1;
	}	
		if (baru == masuk[a].nomortiket)
		{
			printf("Masukkan Nomor Tiket : ");
			scanf("%d",&masuk[a].nomortiket);
			printf("Masukkan Tanggal Masuk kendaraan : ");
			scanf("%d",&masuk[a].date.tgl);
			printf("Masukkan Bulan Masuk Kendaraan : ");
			scanf("%d",&masuk[a].date.bln);
			printf("Masukkan Tahun Masuk Kendaraan : ");
			scanf("%d",&masuk[a].date.thn);
			printf("Masukkan Nomor Kendaraan (Kode Wilayah) : ");
			scanf("%s",&masuk[a].nomorpolisi.kodewilayah);
			printf("Masukkan Nomor Kendaraan (No Polisi) : ");
			scanf("%s",&masuk[a].nomorpolisi.nopol);
			printf("Masukkan Nomor Kendaraan (Kode Seri Terakhir) : ");
			scanf("%s",&masuk[a].nomorpolisi.kodeseri);
			printf("Jenis Kendaraan : \n");
			printf("1. Truk\n");
			printf("2. Bus\n");
			printf("3. Minibus\n");
			printf("4. Motor\n");
			printf("5. Mobil\n");
			printf("Masukkan Jenis Kendaraan : ");
			scanf("%d",&jenis_kendaraan);
			if (jenis_kendaraan == 1)
			{
				strcpy (masuk[a].kendaraan,"Truk");
			} else if (jenis_kendaraan == 2)
			{
				strcpy (masuk[a].kendaraan,"Bus");
			} else if (jenis_kendaraan == 3) 
			{
				strcpy (masuk[a].kendaraan,"Minibus");
			} else if (jenis_kendaraan == 4)
			{
				strcpy (masuk[a].kendaraan,"Motor");
			} else if (jenis_kendaraan == 5)
			{
				strcpy (masuk[a].kendaraan,"Mobil");
			}
			printf("Tujuan yang Tersedia : \n");
			printf("1. Ketapang\n");
			printf("2. Padang Bai\n");
			printf("3. Lembar\n");
			printf("4. Tanjung Perak\n");
			printf("Masukkan Tujuan : ");
			scanf("%d",&tujuan1);
			if (tujuan1 == 1)
			{
				strcpy (masuk[a].tujuan,"Ketapang");
			} else if (tujuan1 == 2)
			{
				strcpy (masuk[a].tujuan,"Padang Bai");
			} else if (tujuan1 == 3) 
			{
				strcpy (masuk[a].tujuan,"Lembar");
			} else if (tujuan1 == 4)
			{
				strcpy (masuk[index_data].tujuan,"Tanjung Perak");
			} 
			printf("Masukkan Bobot Kendaraan : ");
			scanf("%d",&masuk[a].bobot);
			
			printf("Data Sudah Diperbarui!!!!!!");
		}else
		{
				printf("Data Tidak di Temukan");
		}	
	}
}

void sorttujuan()
{
	int n,a,bc,x;
	a = index_data;
	n = a;
	int m,j,i;
	struct data temp;
	 
    for(m=n/2;m>0;m/=2)
	{
        for(j=m;j<n;j++)
		{
            for(i=j-m;i>=0;i-=m)
			{
				bc=strcmp(masuk[i+m].tujuan,masuk[i].tujuan);
                if(bc>0){
                	break;
				}
                else{
                    temp = masuk[i];
                    masuk[i] = masuk[i+m];
                    masuk[i+m] = temp;
                }
            }
        }
    }

    	printf("================================================\n");
	 	printf("		DATA YANG DIURUTKAN\n");
	 	printf("	  Berdasarkan Tujuan\n");
	 	printf("================================================\n\n");
	 	
		lihatdata(); 
}

void sorttiket()
{
	int n,a;
	a = index_data;
	n = a;
	int m,j,i;
	struct data temp;
	 
    for(m = n/2;m>0;m/=2)
	{
        for(j=m;j<n;j++)
		{
            for(i=j-m;i>=0;i-=m)
			{
                if(masuk[i+m].nomortiket>=masuk[i].nomortiket) 
				break;
                else{
                    temp = masuk[i];
                    masuk[i] = masuk[i+m];
                    masuk[i+m] = temp;
                }
            }
        }
    }
    
    	printf("================================================\n");
	 	printf("		DATA YANG DIURUTKAN\n");
	 	printf("	  Berdasarkan Nomor Tiket\n");
	 	printf("================================================\n\n");
	 	
	 
		lihatdata();
}

void sortdate(){
	int n;
	n = index_data;
	int m,j,i;
	
	struct data temp;
	 
    for(m = n/2;m>0;m/=2)
	{
        for(j=m;j<n;j++)
		{
            for(i=j-m;i>=0;i-=m)
			{
                if(masuk[i+m].date.thn && masuk[i+m].date.bln>=masuk[i].date.thn && masuk[i].date.bln)
				break;
                else{
                    temp = masuk[i];
                    masuk[i] = masuk[i+m];
                    masuk[i+m] = temp;
                }
            }
        }
    }
    
    
    	for(i=0;i<n;i++)
		{
		printf("=================================================\n");
		printf("		Data Penumpang\n");
		printf("=================================================\n");
	 	printf("Nomor Tiket : %d\n", masuk[i].nomortiket);
		printf("Tanggal Masuk : %d / %d  / %d\n", masuk[i].date.tgl, masuk[i].date.bln, masuk[i].date.thn);
		printf("Nomor Kendaraan : %s %s %s \n", masuk[i].nomorpolisi.kodewilayah, masuk[i].nomorpolisi.nopol, masuk[i].nomorpolisi.kodeseri);
		printf("Tujuan : %s \n", masuk[i].tujuan);
		printf("Jenis Kendaraan : %s\n", masuk[i].kendaraan);
		printf("Bobot Kendaraan : %d ton\n\n\n", masuk[i].bobot);
	 	}
	 	
}

void sortjeniskendaraan(){
	int n,a,bc;
	a = index_data;
	n = a;
	int m,j,i;
	struct data temp;
	 
    for(m = n/2;m>0;m/=2)
	{
        for(j=m;j<n;j++)
		{
            for(i=j-m;i>=0;i-=m)
			{
				bc=strcmp(masuk[i+m].kendaraan,masuk[i].kendaraan);
                if(bc>0) 
				{
                break;	
				}
                else{
                    temp = masuk[i];
                    masuk[i] = masuk[i+m];
                    masuk[i+m] = temp;
                }
            }
        }
    }	
    

    printf("================================================\n");
	printf("		DATA YANG DIURUTKAN\n");
	printf("	  Berdasarkan Bobot Jenis Kendaraan\n");
	printf("================================================\n\n");
	 	
		lihatdata(); 
}

void sortbobot()
{
	int n,a;
	a = index_data;
	n = a;
	int m,j,i;
	struct data temp;
	 
    for(m = n/2;m>0;m/=2)
	{
        for(j=m;j<n;j++)
		{
            for(i=j-m;i>=0;i-=m)
			{
                if(masuk[i+m].bobot>=masuk[i].bobot) 
				{
                break;	
				}
                else{
                    temp = masuk[i];
                    masuk[i] = masuk[i+m];
                    masuk[i+m] = temp;
                }
            }
        }
    }	
    

    printf("================================================\n");
	printf("		DATA YANG DIURUTKAN\n");
	printf("	  Berdasarkan Bobot Kendaraan\n");
	printf("================================================\n\n");
	 	
		lihatdata(); 
}



int main() 
{
	int pilihan,pilih;

	while (pilihan != 1 || pilihan != 2 || pilihan != 3 || pilihan != 4 || pilihan != 5)
	{		
	printf("\n\nAPLIKASI PELABUHAN\n");
	printf("1. Tambah data\n");
	printf("2. Ubah Data\n");
	printf("3. Pencarian Data\n");
	printf("4. Pengurutan Data\n");
	printf("5. Lihat Data\n");
	printf("Masukkan Pilihan Anda : ");
	scanf("%d", &pilihan);
	
		if (pilihan == 1)
		{
			system("cls");
			printf("Data terinput : %d\n\n",index_data);
			tambahdata();
		} else if (pilihan == 2)
		{
			system("cls");
			ubah();
		}
		else if (pilihan == 3)
		{
			printf("\n\n1. Pencarian Data Berdasarkan Nomor Tiket\n");
			printf("2. Pencarian Data Berdasarkan Bobot Kendaraan\n");
			printf("Masukkan Pilihan Anda : ");
			scanf("%d",&pilih);
			if (pilih == 1){
				caritiket();
			}
		}
		else if (pilihan == 4)
		{
			printf("\n\n1. Pengurutan Data Berdasarkan Nomor Tiket\n");
			printf("2. Pengurutan Data Berdasarkan Tanggal\n");
			printf("3. Pengurutan Data Berdasarkan Bobot Kendaraan\n");
			printf("4. Pengurutan Data Berdasarkan Tujuan\n");
			printf("5. Pengurutan Data Berdasarkan Jenis Kendaraan\n");
			printf("Masukkan Pilihan Anda : ");
			scanf("%d",&pilih);
			
				if (pilih == 1)
				{
					sorttiket();
				}else if (pilih == 2)
				{
		 			sortdate();
				}else if (pilih == 3)
				{
					sortbobot();
				}else if (pilih == 4)
				{
					sorttujuan();
				}else if (pilih == 5){
					sortjeniskendaraan();
				}
		}else if (pilihan == 5) 
		{
			lihatdata();
		}
	
	}	
	return 0;
}
