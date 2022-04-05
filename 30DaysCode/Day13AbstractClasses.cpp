#include <iostream>

using namespace std;

class Book{
    protected:
        string title;
        string author;

    public:
        Book(string t,string a): title(t), author(a){
        }
        
        virtual void display() = 0;
};

class MyBook : public Book {
    private:
        int price;
    
    public:
        MyBook(string title, string author, int p): Book(title, author), price(p){
        }
        
        void display(){
            cout << "Title: " << title << endl;           
            cout << "Author: " << author << endl;           
            cout << "Price: " << price << endl;           
        }
};

int main() {
    string title;
    string author;
    int price;

    getline(cin,title);
    getline(cin,author);
    cin >> price;
    
    MyBook novel(title, author, price);
    novel.display();
    
    return 0;
}
