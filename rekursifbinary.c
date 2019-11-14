#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int BinarySearch(int value[], int awal, int akhir,int cari){
	if(awal <= akhir){
		int median;
		median = (awal+akhir)/2;
		if(cari == value[median]){
			return median;
		}
		else if(cari < value[median]){
			return BinarySearch(value,awal,median-1,cari);
		}
		else if(cari > value[median]){
			return BinarySearch(value,median+1,akhir,cari);
		}
	}
	return -1;
}
int main(int argc, char *argv[]) {
		
		int value[] = {3,9,11,12,15,17,23,31,35};
		int cari;
		int akhir;
		int n = sizeof(value)/sizeof(value[0]);
		printf("BINARY SEARCH\n");
		printf("Masukkan nilai yang ingin dicari : ");
		scanf("%d",&cari);
		
		int index = BinarySearch(value, 0, n-1, cari);
		
	if(index != -1){
		printf("Nilai %d terdapat pada array index %d",cari,index);	
	}
	else {
		printf("Nilai %d tidak terdapat pada array",cari);	
	}
	
	return 0;
}
