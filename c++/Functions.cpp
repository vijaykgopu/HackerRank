#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxValue(int a , int b, int c, int d){
    int max = a;

    max = (max > b) ? max : b;
    max = (max > c) ? max : c;
    max = (max > d) ? max : d;
    
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    int b;
    int c;
    int d;

    cin >> a >> b >> c >> d;
    
    cout << maxValue(a, b, c, d);
    
    return 0;
}
