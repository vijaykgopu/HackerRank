#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    try {
        cout << stoi(s);
    }catch (exception) {
        cout << "Bad String";
    }
    
    return 0;
}
