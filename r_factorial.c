#include <stdio.h>

int factorial(int num);


int main(){
	
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
		
	printf("Factorial: %d",factorial(num));
	return 0;
}


int factorial(int num){
	
	if (num >= 1){
	
		return num * factorial(num-1);
	}
	else{
		return 1;
	}
}

