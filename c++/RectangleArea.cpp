#include <iostream>
using namespace std;

class Rectangle{
    protected:
        int width;
        int height;

    public:
        void display(){
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle{
    public:
        void readInput(){
            cin >> width >> height;
        }
        
        void display(){
            cout << width * height << endl;
        }
};

int main()
{
    RectangleArea r;
    
    r.readInput();    
    r.Rectangle::display();    
    r.display();
    
    return 0;
}
