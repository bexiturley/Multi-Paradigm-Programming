#include <stdio.h>
int main(void){
	int a,b;
	
	printf("Please enter a Number A: ");
	scanf("%d", &a);
	
	printf("Please enter a Number B: ");
	scanf("%d", &b);
	
	if (a == 30 || b == 30 || (a + b ==30)){
		printf("True");
	}
	else{
		printf("False");
	}
	
}