#include <iostream>
using namespace std;

enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

template <> struct Traits <Fruit> {
    static string name(int index){
        string fruit;
        
        switch(index){
                case 0:
                    fruit = "apple";
                    break;
                case 1:
                    fruit = "orange";
                    break;
                case 2:
                    fruit = "pear";
                    break;
                default:
                    fruit = "unknown";
                    break;
        }  
        
        return fruit;
    } 
};

template <> struct Traits <Color> {
    static string name(int index){
        string color;

        switch(index){
                case 0:
                    color = "red";
                    break;
                case 1:
                    color = "green";
                    break;
                case 2:
                    color = "orange";
                    break;
                default:
                    color = "unknown";
                    break;
        }  

        return color;
    } 
};

int main() {
    int t = 0; 
    cin >> t;

    for (int i = 0; i < t; i++) {
        int i1, i2; 
        cin >> i1 >> i2;

        cout << Traits<Color>::name(i1) << " ";
        cout << Traits<Fruit>::name(i2) << endl;
    }
    
    return 0;
}
