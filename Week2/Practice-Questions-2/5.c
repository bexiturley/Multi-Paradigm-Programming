#include <stdio.h>

int main(void){
	int x,y,z;
	
	printf("Please enter a Number X: ");
	scanf("%d", &x);
	
	printf("Please enter a Number Y: ");
	scanf("%d", &y);
	
	printf("Please enter a Number Z: ");
	scanf("%d", &z);
	
	if (x < y && y < z){
		printf("True %d is bigger than %d and %d is bigger than %d", y, x, z, y);
	}
	else{
		printf("False %d is not bigger than %d and %d is not bigger than %d", y, x, z, y);
	}
}