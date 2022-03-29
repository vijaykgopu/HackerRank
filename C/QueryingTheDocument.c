#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n - 1][m - 1][k - 1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
    return document[m - 1][k - 1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k - 1];
}

char**** get_document(char* text) {
    char ****d = malloc(sizeof(char ***));
    d[0] = malloc(sizeof(char **));
    d[0][0] = malloc(sizeof(char *));

    int para_count = 0;
    int sent_count = 0;
    int word_count = 0;
    
    char *char_ptr = NULL;
    
    while(*text){
        if(!char_ptr)
            char_ptr = text;
        
        if(*text == ' '){
            d[para_count][sent_count][word_count]= char_ptr;
            word_count++;
            d[para_count][sent_count] =realloc(d[para_count][sent_count], (word_count + 1) * sizeof(char *));
        }else if(*text == '.'){
            d[para_count][sent_count][word_count]= char_ptr;
            word_count = 0;
            if(*(text + 1) != '\n'){
                sent_count++;
                d[para_count] = realloc(d[para_count], (sent_count + 1) * sizeof(char **));
                d[para_count][sent_count] = malloc(sizeof(char *));
            }
       }else if(*text == '\n'){
            word_count = 0;
            sent_count = 0;
            para_count++;
            d = realloc(d, (para_count + 1) * sizeof(char ***));
            d[para_count] = malloc(sizeof(char **));
            d[para_count][sent_count] = malloc(sizeof(char *));
        }
        
        if((*text == ' ') || (*text == '.') || (*text == '\n')){
            char_ptr = NULL;            
            *text = 0;
        }
        
        text++;
    }
    
    return d;
}


char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2){
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }     
}
