#include <stdio.h>

/*
Fibonacci serisi 1 1 2 3 5 8 13 ... Seklinde ilerler

*/

int main(){

	int ilk_sayi=1;
	int ikinci_sayi=1;
	int i,a;

	printf("sayi gir:");
	scanf("%d",&a);


	printf("%d\n%d\n",ilk_sayi,ikinci_sayi);

	for (i=0; i<a; i++ ){

  		int temp = ikinci_sayi;

  		ikinci_sayi += ilk_sayi;
  		ilk_sayi = temp;
  		printf("%d\n",ikinci_sayi);
}

  return 0;
}
