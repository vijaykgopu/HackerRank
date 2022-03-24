#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int counts[10] = {0};
    char s[1024];
    scanf("%s", s);
    
    for(int i = 0; s[i]; i++)
        if((s[i] >= '0') && (s[i] <= '9'))
            counts[s[i] - '0']++;   
    
    for(int i = 0; i < 10; i++)
        printf("%d ", counts[i]);   
    
    return 0;
}
