#include<iostream>
using namespace std;

class Box {
    private:
        int l;
        int b;
        int h;
    
    public:
        Box(): l(0), b(0), h(0){
        } 
        
        Box(int length, int breadth, int height): l(length), b(breadth), h(height){
        }
        
        Box(Box &box): l(box.l), b(box.b), h(box.h){
        }

        int getLength(){
            return l;   
        }
        
        int getBreadth(){  
            return b;   
        }
        
        int getHeight(){   
            return h;   
        }

        long long calculateVolume(){ 
            return (long long) l * b * h;   
        }
        
        bool operator < (Box &box){
           return (l< box.l) || 
                  ( (l == box.l) && (b < box.b) ) ||
                  ( (l == box.l) && (b == box.b) && (h < box.h) ); 
        }
        
        friend ostream & operator << (ostream &out, Box &box){
            out << box.getLength() << " " << box.getBreadth() << " " << box.getHeight();
            
            return out;
        }
};

int main()
{
    Box box;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int l, b, h;
        
        int type;
        cin >> type;
        
        if(type == 1){
            cout << box << endl;
        }else if(type == 2){
            cin >> l >> b >> h;
            Box newBox1(l, b, h);
            cout << newBox1 << endl;
            box = newBox1;
        } else if(type == 3){
            cin >> l >> b >> h;
            Box newBox2(l, b, h);
            
            (newBox2 < box) ? cout << "Lesser" << endl : cout << "Greater" << endl;
        }else if(type == 4){
            cout << box.calculateVolume() << endl;
        }else if(type == 5){
            Box newBox3(box);
            cout << newBox3 << endl;
        }
    }
    
    return 0;
}
