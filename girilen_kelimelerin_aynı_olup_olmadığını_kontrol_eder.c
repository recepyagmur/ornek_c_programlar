#include <stdio.h>
#include <string.h>

int karsilastir(char string1[],char string2[]);

int main(){
	
	char dizi1[20];
	char dizi2[20];

	printf("ilk kelime: ");
	scanf("%s",dizi1);
	
	printf("ikinci kelime:");
	scanf("%s",dizi2);

	karsilastir(dizi1,dizi2);
	
	return 0;
}

int karsilastir(char string1[],char string2[]){
	
	int i,j;
	int uzunluk1=strlen(string1);
	int uzunluk2=strlen(string2);
	int esit_harf=0;//iki kelimenin harfleri tek tek denenir ve eþit harf sayýsý uzunluða eþit olursa kelimeler aynýdýr.

	if (uzunluk1<uzunluk2 || uzunluk1 >uzunluk2){
		printf("kelimeler farkli.");
	}
	else{//uzunluk1 == uzunluk2
		
		for (i=0;i<uzunluk1;i++){
			if (string1[i] == string2[i]){
				esit_harf++;
			}
			else{
				printf("kelimeler farkli.");
				break;
			}
		}
	}
	if (esit_harf == uzunluk1){
		printf("kelimeler ayni.");
	}
}

/*KISA YOLU

#include <stdio.h>
#include <string.h>

char main(){

	char string1[20],string2[20];

	printf("ilk kelime: ");
	scanf("%s",string1);
	printf("ikinci kelime: ");
	scanf("%s",string2);

	if (strcmp(string1,string2) ==0){
		printf("kelimeler ayni.");
	}
	else {//==1
		printf("kelimeler farkli.");
	}


	return 0;
}



*/

