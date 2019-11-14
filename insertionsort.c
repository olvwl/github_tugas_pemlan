#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int data[12]={1,29,8,2,5,0,9,5,3,4,1};
	int x,y;
	printf("Data sebelum diurutkan\n");
	for(x=0; x<12; x++){
		printf("%d ", data[x]);
}	//menampilkan data
	for( x=1; x<12; x++){
		for( y=x; y>0 && data[y]<data[y-1]; y--){
			//lakukan swap value
			int nilai=data[y-1];
			data[y-1]=data[y];
			data[y]=nilai;
		}
	}
	//mengurutkan data
	printf("\n Data sesudah diurutkan\n");
	for( x=0; x<12; x++){
		printf("%d ", data[x]);
	}

	return 0;
}
