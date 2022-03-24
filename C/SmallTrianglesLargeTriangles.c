#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double AreaOfTriange (triangle t){
    double p = (t.a + t.b + t.c) / 2.0; 
    return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    
    double areas[100] = {0.0};
    for(int i  = 0; i < n; i++)
        areas[i] = AreaOfTriange(tr[i]);
    
    for(int i = 0; i < (n - 1); i++){
        int swapped = 0;
        for(int j = 0; j < (n -i -1); j++){
            if(areas[j] > areas[j + 1]){
                double temp1 = areas[j];
                areas[j] = areas[j + 1];
                areas[j + 1] = temp1;
                
                triangle temp2 = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp2;

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
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
