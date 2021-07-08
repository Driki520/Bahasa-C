#include<stdio.h>

int main(){
	int i,j,n,m;
	
	printf("Masukan jumlah sisi bintang: ");
	scanf("%d",&n);
	printf("Masukan jumlah alas bintang:");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
