#include <iostream>
#include <set>

using namespace std;

int main() {
    int count;
    cin >> count;

    set <int> s;
    for(int i = 0 ; i < count; i++){
        int query;
        int num;
        cin >> query >> num;
        
        switch(query){
            case 1:
                s.insert(num);
                break;
            case 2:
                s.erase(num);
                break;
            case 3:
                if(s.find(num) != s.end())
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl; 
                break;
        }
    }
    
    return 0;
}
