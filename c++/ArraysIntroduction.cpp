#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    cin >> count;
    
    int *a = new int[count];
    
    for(int i = 0; i < count; i++)
        cin >> a[i];
    
    for(int i = count - 1; i >= 0 ; i--)
        cout << a[i] << " ";
    
    delete [] a;
    
    return 0;
}
