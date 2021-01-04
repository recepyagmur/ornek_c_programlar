#include <stdio.h>

int sum(int num);


int main(){
	
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
		
	printf("Sum: %d",sum(num));
	return 0;
}


int sum(int num){
	
	if (num != 0){
	
		return num + sum(num-1);
	}
	else{
		return num;
	}
}

