#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	char nama[30],bln[10];
	int harga,tgl,thn,jum,total;
	int menu=1;
	

	printf("|<<<Selamat Datang di CAFE STARBEK>>> |\n");
	printf("|-------------------------------------|\n");
	printf("|Daftar Menu \t\t\tHarga |\n");
	printf("| 1.Arabica \t\t\t@15000|\n");
	printf("| 2.Cappucino \t\t\t@12000|\n");
	printf("| 3.Espresso  \t\t\t@22000|\n");
	printf("| 4.Mochaccino \t\t\t@13000|\n");
	printf("| 5.Macchiato \t\t\t@16000|\n");
	printf("| 6.Latte     \t\t\t@18000|\n");
	printf("|-------------------------------------|\n\n");
	printf("Nama: ");scanf("%s",&nama);
	printf("Tanggal pembelian: ");scanf("%d %s %d",&tgl,&bln,&thn);
	while(menu!=0){
	printf("Pilih Menu: ");scanf("%d",&menu);
	
	switch(menu)
	{
		case 1:
		
			printf("Menu yang dipilih=Arabica coffe\n");
			printf("Masukan jumlah pesanan: ");scanf("%d",&jum);
			harga=15000;
			total=harga*jum;
			printf("Total pembayaran\t:Rp.%d",total);
			printf("\n==================================\n");
		getch();
		break;	
		
		
		case 2:
		
			printf("Menu yang dipilih=Cappucino\n");
			printf("Masukan jumlah pesanan: ");scanf("%d",&jum);
			harga=12000;
			total=harga*jum;
			printf("Total pembayaran\t:Rp.%d",total);
			printf("\n==================================\n");
		getch();
		break;	
		
		case 3:
		
			printf("Menu yang dipilih=Espresso\n");
			printf("Masukan jumlah pesanan: ");scanf("%d",&jum);
			harga=22000;
			total=harga*jum;
			printf("Total pembayaran\t:Rp.%d",total);
			printf("\n==================================\n");
		getch();
		break;	
		

		case 4:
		
			printf("Menu yang dipilih=Mochaccino\n");
			printf("Masukan jumlah pesanan: ");scanf("%d",&jum);
			harga=13000;
			total=harga*jum;
			printf("Total pembayaran\t:Rp.%d",total);
			printf("\n==================================\n");
		getch();
		break;	
		

		case 5:
		
			printf("Menu yang dipilih=Macchiato\n");
			printf("Masukan jumlah pesanan: ");scanf("%d",&jum);
			harga=16000;
			total=harga*jum;
			printf("Total pembayaran\t:Rp.%d",total);
			printf("\n==================================\n");
		getch();
		break;	
		

		case 6:
		
			printf("Menu yang dipilih=Latte\n");
			printf("Masukan jumlah pesanan: ");scanf("%d",&jum);
			harga=18000;
			total=harga*jum;
			printf("Total pembayaran\t:Rp.%d",total);
			printf("\n==================================\n");

		getch();
		break;	
		
		default:
			printf("Data yang dimasukan salah!");
		getch();
		break;	
		
		}
	}
	return 0;
}
