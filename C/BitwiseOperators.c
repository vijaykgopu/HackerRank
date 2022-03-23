#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int and_max = 0;
    int or_max = 0;
    int xor_max = 0;
    int op;
    
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            op = i & j;
            if((op > and_max) && (op < k))
                and_max = op;
            
            op = i | j;
            if((op > or_max) && (op < k))
                or_max = op;

            op = i ^ j;
            if((op > xor_max) && (op < k))
                xor_max = op;
        }
    }
    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
