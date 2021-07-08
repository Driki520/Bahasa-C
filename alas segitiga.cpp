#include<stdio.h>

int main(){
	int alas,tinggi,luas;
	printf("Ukuran alas: ");scanf("%d",&alas);
	printf("Ukuran tinggi: ");scanf("%d",&tinggi);
	luas=0.5*(alas*tinggi);
	printf("Luas segitiga adalah %d",luas);
	return 0;
}
