#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/

    /**
    * Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
    * Find the largest index l greater than k such that a[k] < a[l].
    * Swap the value of a[k] with that of a[l].
    * Reverse the sequence from a[k + 1] up to and including the final element a[n].
    */
    
    int k;
    for (k = n - 2; k > -1; k--) {
        if(strcmp(s[k], s[k + 1]) < 0) break;
    }
  
    if (k < 0) return 0;

    int l;
    for (l = n - 1; l > k; l--) {
        if(strcmp(s[k], s[l]) < 0) break;
    }

    char * temp = s[k];
    s[k] = s[l];
    s[l] = temp;

    for(int i = k + 1, j = n - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
