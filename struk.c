#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//struct mhs{
//	char npm[20];
//	double ipk;
//};
struct mahasiswa{
	int npm;
	double ipk;
};
	typedef struct mahasiswa mhs;
int main() {
	struct mahasiswa mhs[5];
	int i;
	mhs[0].npm=11280;
	mhs[0].ipk=3.45;
	
	mhs[1].npm=12456;
	mhs[1].ipk=3.45;
	
	mhs[2].npm=13567;
	mhs[2].ipk=3.45;
	
	for(i=0; i<=2; i++){
		printf("Npm : %d, Ipk : %.2lf \n", mhs[i].npm, mhs[i].ipk);
	}
	
		printf("Hasil Belakang ke Depan :\n");
		
	for(i=2; i>=0; i--){
		printf("Npm : %d, Ipk : %.2lf \n", mhs[i].npm, mhs[i].ipk);
	}
	int cari;
	printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(mhs[i].npm== cari){
					printf("Npm : %d\n", mhs[i].npm);
					printf("ipk : %f\n", mhs[i].ipk);
					break;
				} 
		}

return 0;
}
