#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> sm;

    int count;
    cin >> count;
    
    for(int i = 0; i < count; i++){
        int query;
        string name;
        int marks;        

        cin >> query;    
        switch(query){
            case 1:
                cin >> name >> marks;
                sm[name] += marks;
                break;
            case 2:
                cin >> name;
                sm.erase(name);                
                break;
            case 3:
                cin >> name;
                
                if(sm.find(name) != sm.end())
                    cout << sm[name] << endl;
                else
                    cout << "0" << endl;

                break;
        }
    }
    
    return 0;
}
