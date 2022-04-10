#include <iostream>
using namespace std;

bool checkUsername(string name) {
    if(name.length() < 5)
        throw invalid_argument (to_string(name.length()));

    for(int i = 0; i < name.length() - 1; i++)
        if(name[i] == 'w' && name[i+1] == 'w')
            return false;

    return true;
}

int main() {
    int count; 
    cin >> count;
    
    while(count--) {
        string name;
        cin >> name;
    
        try {
            (checkUsername(name)) ? cout << "Valid" << endl : cout << "Invalid" << endl;
        } catch (exception &e) {
            cout << "Too short: " << e.what() << endl;
        }
    }
    
    return 0;
}
