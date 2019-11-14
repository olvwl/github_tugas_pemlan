#include <stdio.h>
#include <conio.h>

int main() {
	int i, cari;
		int npm[5] = {11280,11281,11282,11283,11284};
		double ipk[5] = {3.75,3.80,3.90,3.95,4.00};
			//menampilkan data dari depan kebelakang
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<5; i++){
				printf("%d . Npm : %d Ipk : %.2lf\n",i, npm[i],ipk[i]);
			}
			//menampilkan data dari belakang ke depan
			printf("Data Mahasiswa  dari depan ke belakang: \n\n");
			for(i = 4 ; i>=0; i--){
			printf("%d . Npm : %d Ipk : %.2lf\n",i, npm[i],ipk[i]);
			}	
		
			printf("Masukkan npm yang dicari dar: \n");
			scanf("%d", &cari);
			
			for(i = 0; i<=5; i++){
				if(npm[i]==cari){
					printf("%d . Npm : %d Ipk : %.2lf\n",i, npm[i],ipk[i]);
					break;
				}
				
			}			
	
	
	return 0;
}
