#include<stdio.h>
//jika jumlah bonus berbeda kalian bisa mengubahnya sendiri ya :D
int main(){
	int Mk,U,G;
	
	printf("-------Menu-----");
	printf("\n1.Staff\n2.non staff");
	printf("\nMasukan jabatan anda: ");
	scanf("%d",&G);
	printf("Masukan Masa kerja dalam hitungan tahun: ");
	scanf("%d",&Mk);
	printf("Masukan umur: ");
	scanf("%d",&U);
	if(G==1){
		if(Mk>=5&&U>=50){
			printf("Bonus Rp.1.000.000");
		}
		else if(Mk>=5&&U<50){
			printf("Bonus Rp.700.000");
		}
		else if(Mk<5){
			printf("Bonus Rp.500.000");
		}
	}
	else if(G==2){
		if(Mk>=5&&U>=50){
			printf("Bonus Rp.400.000");
		}
		else if(Mk>=5&&U<50){
			printf("Bonus Rp.300.000");
		}
		else if(Mk<5){
			printf("Bonus Rp.0");
		}
	}
	else{
		printf("Data yang anda masukan salah!");
	}
	return 0;
}
