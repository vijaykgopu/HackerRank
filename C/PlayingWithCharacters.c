#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    char word[100];
    char setence[100];
    
    scanf("%c", &c);
    scanf("%s", word);
    scanf("%*[\n] %[^\n]", setence);
    
    printf("%c\n",c);
    printf("%s\n",word);
    printf("%s\n",setence);
    
    return 0;
}
