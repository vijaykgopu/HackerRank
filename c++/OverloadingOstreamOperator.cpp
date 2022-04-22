#include <iostream>
using namespace std;

class Person {
    private:
        string first_name;
        string last_name;
    
    public:
        Person(string f_name, string l_name) : first_name(f_name), last_name(l_name) {    
    }
    
    const string& get_first_name() const {
        return first_name;
    }
    
    const string& get_last_name() const {
        return last_name;
    }
};

ostream& operator << (ostream &os, Person &p){
    os << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name() ;

    return os;
}

int main() {
    string first_name, last_name, event1;
    cin >> first_name >> last_name >> event1;

    auto p = Person(first_name, last_name);
    cout << p << " " << event1 << endl;
    
    return 0;
}
