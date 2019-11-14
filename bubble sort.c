#include <stdio.h>
#include <stdlib.h> 


int main(){
	int i,j,k;
	
	int data[12] = {0,9,5,6,1,9,2,5,4,7,8,3};
	int panjang = sizeof(data)/sizeof(data[0]); 
	
	printf("Angka = ");
	for	(i=0;i<panjang;i++){
		printf("%d ",data[i]);
	}
	int menu = 1,input,a;
	printf("\n");
	while(menu==1){
		printf("\n1. Dari terkecil");
		printf("\n2. Dari terbesar");
		printf("\n0. Exit");
		printf("\nMasukkan Pilihan Anda = ");
		scanf("%d",&input);
		switch (input){
			case 1:{
				for(j=0;j<panjang-1;j++){
					for(k=0;k<panjang-1;k++){
						if(data[k+1]<data[k]){
							int temp=data[k];
							data[k]=data[k+1];
							data[k+1]=temp;
						}
					}
				}
				printf("\nAngka = ");
				for	(a=0; a<panjang; a++){
					printf("%d ",data[a]);
				}
				break;
			}
			case 2:{
				for(a=0;a<panjang-1;a++){
					for(k=0; k<panjang-1;k++){
						if(data[k+1]>data[k]){
							int temp=data[k];
							data[k]=data[k+1];
							data[k+1]=temp;
						}
					}
				}
				printf("\nAngka = ");
				for	(i=0;i<panjang;i++){
					printf("%d ",data[i]);
				}
				break;
			}
			case 0:
				menu=0;
				break;
		}
	}
	return 0;
}
