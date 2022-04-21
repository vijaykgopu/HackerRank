#include <iostream>
using namespace std;

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();
#define endl '\n';

template <class T> class AddElements{
    private:
        T e;    
    
    public:
        AddElements(T a): e (a) {
        }
        
        T add(T b){
            return e + b;
        }
};

int main () {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string type;
        cin >> type;

        if (type=="int") {
            int a, b;
            cin >> a >> b;

            AddElements <int> myInt (a);
            cout << myInt.add(b) << endl;
        } else if (type == "float") {
            double a, b;
            cin >> a >> b;

            AddElements <double> myFloat (a);
            cout << myFloat.add(b) << endl;
        } else if (type == "string") {
            string a, b;
            cin >> a >> b;

            AddElements <string> myString (a);
            cout << myString.add(b) << endl;
        }
    }
    
    return 0;
}
