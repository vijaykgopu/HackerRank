#include <iostream>
#include <vector>

using namespace std;

class Person{
    protected:
        string firstName;
        string lastName;
        int id;
    public:
        Person(string firstName, string lastName, int identification){
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = identification;
        }
        void printPerson(){
            cout << "Name: "<< lastName << ", "<< firstName << endl;
            cout <<"ID: "<< id << endl; 
        }
    
};

class Student : public Person{
    private:
        vector <int> testScores;
    public:
        Student(string firstName, string lastName, int identification, vector<int> scores): Person(firstName, lastName, identification){
            this->testScores = scores;
        }

        char calculate(){
            int total = 0;
            for(int i = 0; i < testScores.size(); i++)
                total += testScores[i];
                
            int avg = total / testScores.size();
            char grade;
            
            if (avg > 89)
                grade = 'O';
            else if (avg > 79)
                grade = 'E';
            else if (avg > 69)
                grade = 'A';
            else if (avg > 54)
                grade = 'P';                
            else if (avg > 39)
                grade = 'D';
            else
                grade = 'T';
            
            return grade;
        }
        
};

int main() {
    string firstName;
    string lastName;
    cin >> firstName >> lastName;
 
    int id;
    int numScores;
    cin >> id >> numScores;

    vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << endl;
    
    delete s;
    return 0;
}
