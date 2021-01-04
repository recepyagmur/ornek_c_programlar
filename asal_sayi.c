#include <stdio.h>
 
int prime(int a, int b);
 
int main() {
    int num;
    
    printf("enter a number:");
    scanf("%d",&num);
    
    int result = prime(num, num / 2);
    if (result == 0)
        printf("%d is not a prime number\n", num);
    else
        printf("%d is the prime number\n", num);
    return 0;
}
 
int prime(int a, int b) {
    if (a < 2)
        return 0;
    if (b == 1)
        return 1;
    if (a % b == 0)
        return 0;
    return prime(a, b - 1);
}
