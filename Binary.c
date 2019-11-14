#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//searching and sorting

int main(int argc, char *argv[]) {
	int value[] = {3,9,11,12,15,17,23,31,35};
	int cari,tengah,median,i,akhir,apa;
	int awal =0;
		printf("BINARY SEARCH\n");
		printf("Masukkan nilai yang ingin dicari : ");
		scanf("%d",&cari);
		int panjang = sizeof(value)/sizeof(value[0]);
		int a=0;
			while(awal <= panjang){
					median = (awal+panjang)/2;
				 //printf("%d\n", median);	
					tengah = (value[median]);
					//printf("Value %d\n", tengah);
					if (tengah == cari)
					{
						printf("Ada");
						break;
					}
					else if (tengah > cari)
					{
						for(a=1;a<=median;a++)
						{
						apa = (value[median-a]);
						//printf("Hasil : %d\n", apa);
							if(apa == cari)
							{
								printf("Ada");
								break;
							}
						}if(apa != cari){
							printf("Tidak ada");
						}
						break;
					}
					 else if (tengah < cari)
					{
					 	for(a=1;a<=median;a++)
						{
					 	akhir = (value[median+a]);
						//printf("Hasil = %d\n",akhir);
							if(akhir == cari){
								printf("Ada");
								break;
							}
						 }if(akhir != cari){
							printf("Tidak ada");
						}
						break;
					}
					awal++;
				 }
				 return 0;
}
		
			

