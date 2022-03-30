#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int q;
    
    cin >> n >> q;    
    int **a = new int * [n];
    
    int k;
    for(int i = 0; i < n; i++){
        cin >> k;
        a[i] = new int [k];
 
        for(int j = 0; j < k; j++)
            cin >> a[i][j];
    }
    
    int x;
    int y;
    for(int i = 0 ; i < q; i++){
        cin >> x >> y;
        cout << a[x][y] << endl;    
    }
    
    for(int i = 0; i < n; i++)
        delete [] a[i];
    delete [] a;
    
    return 0;
}
