#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parseInts(string str) {
    vector<int> integers;
    
    string s;
    for(int i = 0; i < str.size(); i++){
        
        if(str[i] != ','){
            s += str[i];
        }else{
            integers.push_back(stoi(s));
            s = "";
        }
    }
    integers.push_back(stoi(s));
    
    return integers;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;

    vector<int> integers = parseInts(s);

    for(int i = 0; i < integers.size(); i++)
        cout << integers[i] << endl;
    
    return 0;
}
