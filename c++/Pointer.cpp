#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int absoluteSum(int a, int b){
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;

    return (a + b);     
}

int absoluteDiff(int a, int b){
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;

    return (a - b) < 0 ? (b - a) : (a - b);     
}


int main() {
    int a;
    int b;
    
    cin >> a >> b;

    cout << absoluteSum(a, b) << endl;
    cout << absoluteDiff(a, b) << endl;

    return 0;
}
