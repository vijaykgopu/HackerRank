#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    int sum = 0;
    
    scanf("%d", &count);
    int *arr = (int *) malloc(sizeof(int) * count);
    
    for(int i = 0; i < count; i++)
        scanf("%d", (arr + i));

    for(int i = 0; i < count; i++)
        sum += arr[i];

    printf("%d", sum);
    
    free(arr);    
    return 0;
}
