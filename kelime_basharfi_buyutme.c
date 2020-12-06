#include <stdio.h>
#include <string.h>

int uzunluk_bul(char name_dizi[]);
char basharf_buyut(char dizi[]);

int main(){
	
	char dizi[100];
	
	printf("isim giriniz: ");
	scanf("%s",dizi);
	
	int uzunluk;
	uzunluk = strlen(dizi);
	
	if (dizi[0] >='a' && dizi[0] <= 'z'){
		
		dizi[0]= dizi[0] - ('a'-'A');
		
		printf("%s",dizi);
		
	}
	else{
		printf("basharf zaten buyuk aslan parcasi");
	}
	
	return 0;
}