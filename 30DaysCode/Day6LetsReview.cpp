#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string alternateString(string &word, int i){
    string s;
    
    for(; i < word.length(); i = i + 2)
        s += word[i];
    
    return s;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int count;
    cin >> count;
    
    while(count--){
        string word;
        cin >> word;
        
        cout << alternateString(word, 0) << " " << alternateString(word, 1) << endl;
    }
    
    return 0;
}
