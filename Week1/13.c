#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%d",test(12, 17));
    printf("\n%d",test(2, 17));
    printf("\n%d",test(22, 17));
    printf("\n%d",test(20, 0));
    }   
    
    int test(int a, int b)
         {
          return a + b >= 10 && a + b <= 20 ? 30 : a + b;
        }