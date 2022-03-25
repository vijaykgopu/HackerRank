#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int count_dist_chars(const char *s){
    int chars[26] = {0};
    int count = 0;

    for(int i = 0; s[i]; i++)
        chars[s[i] - 'a']++;
    
    for(int i = 0; i < 26; i++)
        if(chars[i])
            count++;
            
    return count;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int diff = count_dist_chars(a) - count_dist_chars(b);
    return (diff) ? diff : strcmp(a, b);
}

int sort_by_length(const char* a, const char* b) {
    int diff = strlen(a) - strlen(b);        
    return (diff) ? diff : strcmp(a, b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    for(int i = 0; i < (len - 1); i++){
        int swapped = 0;
        for(int j = 0; j < (len -1 -i); j++){
            if(cmp_func(arr[j], arr[j + 1]) > 0){
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1;             
            }
        }
        if(!swapped)
            break;    
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
