#include <iostream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        string first_name;
        string last_name;
        int age;
        int standard;
        
    public:
    void set_age(int age) { this->age = age; }
    void set_first_name(string first_name) { this->first_name = first_name; }
    void set_last_name(string last_name) { this->last_name = last_name; }
    void set_standard(int standard) { this->standard = standard; }

    int get_age() { return age; }
    string get_first_name() { return first_name; }
    string get_last_name() { return last_name; }
    int get_standard() { return standard; }
    
    string to_string(){
        string converted;

        converted += std::__cxx11::to_string(age);
        converted += "," + first_name + "," + last_name + ",";
        converted += std::__cxx11::to_string(standard);
        
        return converted;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;  
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl << endl;
    cout << st.to_string();
    
    return 0;
}
