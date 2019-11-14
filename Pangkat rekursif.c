#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float x,y,hasil,i,a;
float rekursif(float x, float y){
	if (y==0){
		return 1;
	}if(y<=-1){
		return rekursif(x,y+1)/x; 
	}else {
		return rekursif(x,y-1)*x;
	}
}
float iterasi(float x, float y){
	hasil=1;
	if (y==0){
		return 0;
	}
	if(y<=-1){
	for(i=-1; i>=y; i--){
		hasil=hasil*(1.0/x);
	}
	}else{
		for(i=1; i<= y;i++){
			hasil = hasil*x;
		}
	}
	return hasil;
}
int main() {
	printf("Masukkan Angka : ");
	scanf("%f",&x);
	printf("Masukkan Pangkat : ");
	scanf("%f",&y);
	printf("Hasil Pangkat Iterasi : %.3f\n", iterasi(x,y));
	printf("Hasil Pangkat Rekursif : %.3f", rekursif(x,y));
	return 0;
}
