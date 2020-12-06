#include <stdio.h>

//0 1 1 2 3 5 8 13 21 

int main(){       

	int i,num;
	
	printf("num:");
	scanf("%d",&num);

	int x[num];
	
	x[0]=0;
	x[1]=1;
	
	
	for (i=2;x[i-1] <= num;i++){
		x[i] = x[i-1] +x[i-2];
		x[i+1] = x[i] + x[i-1];
	}
	
	
	for (i=0;x[i]<=num;i++){
		if (prime(x[i]) ==0){
			if (x[i] ==1 || x[i] ==0){
				continue;
			}
			else {
				printf("%d\n",x[i]);
			}
		}
		else {
			continue;
		}
	}
	
}

int prime(int num){
	
	int i,prime=0;
	int a=0,b=1;
	
	
	if (num == 0){
		return b;
	}
	
	else if (num ==1){
		return b;
	}
	else {
		for (i=2;i<num/2;i++){
		
			if (num%i==0){
				prime++;
				break;
			}
		}
		
		if (prime ==1){
			return b;
		}
		else{
			return a;
		}
	}	
}
