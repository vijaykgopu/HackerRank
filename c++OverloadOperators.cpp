#include<iostream>
using namespace std;

class Complex{
    private: 
        int real;
        int imaginary;

    public:
        int getReal(){
            return real;
        }

        int getImaginary(){
            return imaginary;
        }

        void input(string s){
            int num;
            int i;
            
            for(num = 0, i = 0; s[i] != '+'; i++)
                num = (num * 10) + s[i] - '0';    
            real = num;
            
            for(num = 0, i += 2; i < s.length(); i++)
                num = (num * 10) + s[i] - '0';
            imaginary = num;
        }

        Complex & operator + (Complex &a){
            a.real = this->real + a.real;
            a.imaginary = this->imaginary + a.imaginary;
            
            return a;    
        }
};

ostream & operator << (ostream &out, Complex a){
    out << a.getReal() << "+i" << a.getImaginary();        
    return out; 
}

int main()
{
    string s1, s2; 
    cin >> s1 >> s2;

    Complex x, y;
    x.input(s1);
    y.input(s2);

    cout << x + y << endl;
    
    return 0;
}
