#include <stdio.h>

int main() {
	
	int ku=0,su=1;
	char ch;
	FILE *veri;
	
	veri = fopen("dosya.txt","r");

	while(!feof(veri)){ //feof() dosyanın sonuna gelmişse 0 olmayan bir değer döndürür. 
		ch = getc(veri);//getc() dosyanın içindeki verileri karakter olarak yazdırır.
		ku++;
		if (ch == '\n'){
			su++;
		}
		else if (ch ==' '){
			ku--;
		}
	}

	printf("Karakter sayisi: %d\n",ku-su);
	printf("Satir sayisi: %d",su);
	fclose(veri);
	return 0;
}