#include <stdio.h>
int main(void){
	int a,b, ans;
	
	printf("Please enter a Number A: ");
	scanf("%d", &a);
	
	printf("Please enter a Number B: ");
	scanf("%d", &b);
	
	ans = a + b;
	
	if (ans<=10 || ans <= 20){
		printf("30");
	}
	else{
		printf("Sum of %d and %d is not between 10 and 20", a, b);
	}
}