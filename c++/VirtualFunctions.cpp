#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
        
    public:
        virtual void getData() {
            cin >> name >> age;
        }
        
        virtual void putData() {
            cout << name << " " << age << " ";            
        }  
};

class Professor : public Person{
    private:
        static int objCount;
        int publications;
        int currentId;
    
    public:
        Professor() : currentId(++objCount){
        }
        
        void getData() {
            Person::getData();
            cin >> publications;
        }

        void putData() {
            Person::putData();
            cout << publications << " " << this->currentId << endl;
        }  
};

int Professor:: objCount = 0;

class Student : public Person{
    private: 
        static int objCount;
        int marks[6];
        int currentId;
    
    public:
        Student() : currentId(++objCount){
        }
        
        void getData() {
            Person::getData();
            
            for(int i = 0; i < 6; i++)
                cin >> marks[i];
        }

        void putData() {
            Person::putData();

            int total = 0;
            for(int i = 0; i < 6; i++)
                total += marks[i];

            cout << total << " " << this->currentId << endl;            
        }  
};

int Student:: objCount = 0;

int main(){
    int n;
    cin >> n;

    Person *per[n];

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;

        per[i] = (val == 1) ? (Person *) new Professor : (Person *) new Student;
        per[i]->getData();
    }

    for(int i = 0; i < n; i++)
        per[i]->putData();

    for(int i = 0; i < n; i++)
        delete per[i];

    return 0;

}
