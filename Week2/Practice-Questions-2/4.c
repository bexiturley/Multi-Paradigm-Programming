#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a,b, ans;
	
	printf("Please enter a Number A: ");
	scanf("%d", &a);
	
	printf("Please enter a Number B: ");
	scanf("%d", &b);
	
	if (a == 5 || b == 5 || a + b == 5){
		printf("True");
	}
	else{
		printf("False");
	}
}