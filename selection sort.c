#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[6] = {32,75,69,58,21,40};
	int n = sizeof(a)/sizeof(a[0]);
	int awal =0;
	int akhir = n-1;
	int i,j,index,b;
	printf("Data yang diurutkan\n");

		for(i=0;i<=akhir;i++){
			index = i;
			for(j=i+1; j<n; j++){
			if(a[j] < a[index])
			index = j;
			printf("%d\n", a[index]);
			} 
			int temp = a[i];
			a[i] = a[index];
			a[index] = temp;
		}
		printf("Hasil\n");
	for(b=0;b<n;b++){
		printf(" %d  ", a[b]);
	}	
	return 0;
}
