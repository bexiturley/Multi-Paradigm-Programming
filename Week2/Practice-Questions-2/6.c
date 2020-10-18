#include <stdio.h>

int main(void){
	int x,y,z;
	
	printf("Please enter a Number X: ");
	scanf("%d", &x);
	
	printf("Please enter a Number Y: ");
	scanf("%d", &y);
	
	printf("Please enter a Number Z: ");
	scanf("%d", &z);
	
	if (x % 10 == y % 10 || x % 10 == z % 10 || y % 10 == z % 10){
		printf("These rightermost numbers match");
	}
	else{
		printf("These rightermost numbers don't match");
	}
	
}