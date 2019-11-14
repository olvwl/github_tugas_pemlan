#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int nilai[2][3][3]={{{5,1,5},{6,7,8},{1,2,1}},{{-3,2,1},{-4,3,4},{-5,7,8}}};
	int jarak[12];
	int a,b,c,i,j,k,f=0;
	
	for(a=0;a<2;a++){
		printf("X\t\tY\t\tZ\n");
		printf("=================================\n");
		for(b=0;b<3;b++){
			for(c=0;c<3;c++){
				printf("%d\t\t",nilai[a][b][c]);
			}
			printf("\n");
		}
		printf("\n");
	}
    
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			for(k=0;k<=2;k++){
				if(j<2){
				jarak[f] = nilai[i][j][k] - nilai[i][j+1][k];
				printf("Jarak : %d\n",jarak[f]);
				f++;
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	double hasil1 = (sqrt(pow(jarak[0],2)+pow(jarak[1],2)+pow(jarak[2],2)))+(sqrt(pow(jarak[3],2)+pow(jarak[4],2)+pow(jarak[5],2)));
	double hasil3 = (sqrt(pow(jarak[6],2)+pow(jarak[7],2)+pow(jarak[8],2)))+(sqrt(pow(jarak[9],2)+pow(jarak[10],2)+pow(jarak[11],2)));
	
	printf("Hasil %lf\n",hasil1);
//	printf("Hasil %lf\n",hasil2);
	printf("Hasil %lf\n",hasil3);
//	printf("Hasil %lf\n",hasil4);
	
	
	return 0;
}
