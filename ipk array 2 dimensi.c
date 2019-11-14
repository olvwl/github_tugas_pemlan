#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct mahasiswa{
	char nama[30];
	char npm[20];
	double ipk;
	int sks[50];
	double nilai[50];
	char nam_matkul[30][30];
};

main() {
	struct mahasiswa mhs[5];
	int i,y;
	float total_ip;
	float total_ipk;
	int total_sks;
	
	strcpy (mhs[0].nama,"Melania");
	strcpy (mhs[0].npm,"18081010011");
	strcpy (mhs[0].nam_matkul[0],"Kalkulus");
	mhs[0].nilai[0]= 3.45;
	mhs[0].sks[0]=4;
	strcpy (mhs[0].nam_matkul[1],"Sistem Operasi");
	mhs[0].nilai[1]=3.55;
	mhs[0].sks[1]=4;
	strcpy (mhs[0].nam_matkul[2],"Aljabar Linear");
	mhs[0].nilai[2]=3.65;
	mhs[0].sks[2]=4;
	strcpy (mhs[0].nam_matkul[3],"Pancasila");
	mhs[0].nilai[3]=4.0;
	mhs[0].sks[3]=3;
	
	strcpy(mhs[1].nama,"Michael");
	strcpy(mhs[1].npm,"18081010012");
	strcpy(mhs[1].nam_matkul[0],"Kalkulus");
	mhs[1].nilai[0]=3.45;
	mhs[1].sks[0]=4;
	strcpy(mhs[1].nam_matkul[1],"Sistem Operasi");
	mhs[1].nilai[1]=3.55;
	mhs[1].sks[1]=4;
	strcpy(mhs[1].nam_matkul[2],"Aljabar Linear");
	mhs[1].nilai[2]=3.65;
	mhs[1].sks[2]=4;
	strcpy(mhs[1].nam_matkul[3],"Pancasila");
	mhs[1].nilai[3]=4.0;
	mhs[1].sks[3]=3;
	
	strcpy(mhs[2].nama,"Dinar");
	strcpy(mhs[2].npm,"18081010013");
	strcpy(mhs[2].nam_matkul[0],"Kalkulus");
	mhs[2].nilai[0]=3.44;
	mhs[2].sks[0]=4;
	strcpy(mhs[1].nam_matkul[1],"Sistem Operasi");
	mhs[2].nilai[1]=3.75;
	mhs[2].sks[1]=4;
	strcpy(mhs[2].nam_matkul[2],"Aljabar Linear");
	mhs[2].nilai[2]=3.85;
	mhs[2].sks[2]=4;
	strcpy(mhs[2].nam_matkul[3],"Pancasila");
	mhs[2].nilai[3]=3.67;
	mhs[2].sks[3]=3;
	
	strcpy(mhs[3].nama,"Rena");
	strcpy(mhs[3].npm,"18081010014");
	strcpy(mhs[3].nam_matkul[0],"Kalkulus");
	mhs[3].nilai[0]=3.34;
	mhs[3].sks[0]=4;
	strcpy(mhs[3].nam_matkul[1],"Sistem Operasi");
	mhs[3].nilai[1]=3.25;
	mhs[3].sks[1]=4;
	strcpy(mhs[3].nam_matkul[2],"Aljabar Linear");
	mhs[3].nilai[2]=3.45;
	mhs[3].sks[2]=4;
	strcpy(mhs[3].nam_matkul[3],"Pancasila");
	mhs[3].nilai[3]=3.77;
	mhs[3].sks[3]=3;
	
	strcpy(mhs[4].nama,"Dean");
	strcpy(mhs[4].npm,"18081010015");
	strcpy(mhs[4].nam_matkul[0],"Kalkulus");
	mhs[4].nilai[0]=3.34;
	mhs[4].sks[0]=4;
	strcpy(mhs[4].nam_matkul[1],"Sistem Operasi");
	mhs[4].nilai[1]=3.05;
	mhs[4].sks[1]=4;
	strcpy(mhs[4].nam_matkul[2],"Aljabar Linear");
	mhs[4].nilai[2]=3.65;
	mhs[4].sks[2]=4;
	strcpy(mhs[4].nam_matkul[3],"Pancasila");
	mhs[4].nilai[3]=3.79;
	mhs[4].sks[3]=3;
	
	printf("\t\t\t****Data Mahasiswa Semester 1****\n\n\n");
	for(i=0;i<=4;i++){
			total_sks=0;
			total_ipk=0;
			total_ip=0;
			printf("-----------------------------------------------------\n");
			printf("\t\tData Mahasiswa Ke-%d\n\n",i+1);
			printf("Nama Mahasiswa: %s\n", mhs[i].nama);
			printf("Npm Mahasiswa : %s\n", mhs[i].npm);
			printf("-----------------------------------------------------\n");
		for(y=0;y<=3;y++){
			total_ip = total_ip + ((mhs[i].nilai[y])*(mhs[i].sks[y]));
			total_sks = total_sks+mhs[i].sks[y];
			printf("%s : %.3lf \n",mhs[i].nam_matkul[y],mhs[i].nilai[y]);
		}
		printf("-----------------------------------------------------\n");
		total_ipk = total_ipk + total_ip/total_sks;
		printf("Total Sks : %d\n",total_sks);
		printf("IPK : %.3f\n\n",total_ipk);
	}

	return 0;
}
