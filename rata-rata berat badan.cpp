/*	Program	: Persoalan hari penimbangan
	Author	: 3411201014
	deskripsi:
	Tanggal :
*/
#include<stdio.h>
#include<conio.h>

int main(){
	float A,B,C,D,E,F;
	float berat;
	
	printf("Masukan berat badan ke-1: ");
	scanf("%f",&A);
	printf("Masukan berat badan ke-2: ");
	scanf("%f",&B);
	printf("Masukan berat badan ke-3: ");
	scanf("%f",&C);
	printf("Masukan berat badan ke-4: ");
	scanf("%f",&D);
	printf("Masukan berat badan ke-5: ");
	scanf("%f",&E);
	printf("Masukan berat badan ke-6: ");
	scanf("%f",&F);
	berat=(A+B+C+D+E+F)/6;
	
	if((A<=50)&&(A<=100)&&(B<=50)&&(B<=100)&&(C<=50)&&(C<=100)&&(D<=50)&&(D<=100)&&(E<=50)&&(E<=100)&&(F<=50)&&(F<=100));
		printf("Rata rata berat badan adalah %f",berat);
	return 0;
}
