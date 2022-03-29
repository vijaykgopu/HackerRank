#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, string> pBook;
    string name;
    string number;

    int count;
    cin >> count;
    
    for(int i = 0; i < count; i++){
        cin >> name >> number;    
        pBook.insert(pair<string , string> (name, number));        
    }
    
    while(cin >> name){
        if(pBook.find(name) == pBook.end())
            cout << "Not found" << endl;
        else
            cout << name << "=" << pBook.find(name)->second << endl;
    }
    
    return 0;
}
