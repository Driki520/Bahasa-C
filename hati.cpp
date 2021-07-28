#include<stdio.h>
#include<conio.h>

int main(){
	//kamus
	int n=6,p=7;
	int pil;
	char ya,tidak;
	printf("----Pilihan----\n");
	printf("1.ya\n");
	printf("2.tidak\n");
	printf("Maukah kau jadi pacarku?");
	scanf("%d",pil);
	pil=ya;
	if(pil==ya){
		for(n=0;n<6;n++){
			for(p=0;p<7;p++){
				if((n==0 && p%3!=0) || (n==1 && p%3==0) || (n-p==2) || (n+p==8)){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else if(pil==tidak){
		printf("no");
	}
	
}
