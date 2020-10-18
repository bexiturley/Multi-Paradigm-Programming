#include <stdio.h>
int main(void){
	const int x = 51;
	int n, ans;
	
	printf("Please enter a Number: ");
	scanf("%d", &n);
	
	if (n > x){
		ans = (n - x)*3;
		printf("%d is greater than 51 so triple the difference is %d", n, ans);
	}
	else{
		ans = x - n;
		printf("%d is less than 51 so the difference is %d", n, ans);
	}
}
