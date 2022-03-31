#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    string a;
    string b;
    
    cin >> a;
    cin >> b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a << b << endl;
    cout << b[0] << a.substr(1) << " " << a[0] << b.substr(1);
       
    return 0;
}
