#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int minimum(a, b){
    return (a < b)? a : b;
}

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    int min;
    int max = 2*n - 1; 
    for(int i = 0; i < max; i++){
        for(int j = 0; j < max; j++){
            min = minimum(i , j);
            min = minimum(min , max-i-1);
            min = minimum(min , max-j-1);
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
