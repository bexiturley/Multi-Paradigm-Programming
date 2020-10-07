#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("%d",test(1, 2, 3));
    printf("\n%d",test(4, 5, 6));
    printf("\n%d",test(-1, 1, 0));
    }       
    int test(int x, int y, int z)
         {
           return x < y && y < z;
         }