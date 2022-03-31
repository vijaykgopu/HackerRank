#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> integers;
    
    int count;
    cin >> count;
           
    for(int i = 0; i < count; i++){
        int num;
        cin >> num;
        integers.push_back(num);
    }
    
    sort(integers.begin(), integers.end());
    
    for(int i = 0; i < count; i++)
        cout << integers[i] << " ";

    return 0;
}
