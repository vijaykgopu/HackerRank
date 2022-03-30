#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long factorial(int n){
    return (n <= 1) ? n : (n * factorial(n - 1));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    cin >> num;
    
    cout << factorial(num); 
    return 0;
}
