#include<iostream>
using namespace std;

class A {
    private:
        int callA;

        void inc(){
            callA++;
        }

    protected:
        void func(int &a){
            a = a * 2;
            inc();
        }
        
    public:
        A(): callA (0){
        }
        
        int getA(){
            return callA;
        }
};

class B {
    private:
        int callB;

        void inc(){
            callB++;
        }

    protected:
        void func(int &a){
            a = a * 3;
            inc();
        }

    public:
        B(): callB (0){
        }
        
        int getB(){
            return callB;
        }
};

class C {
    private:
        int callC;

        void inc(){
            callC++;
        }

    protected:
        void func(int &a){
            a = a * 5;
            inc();
        }
    public:
        C(): callC (0){
        }
        
        int getC(){
            return callC;
        }
};

class D : public A, B, C{
    private: 
        int val;

    public:
         D(): val (1){
         }

         void update_val(int num) {
            while(val != num){                
                if( ((num / val) % 2) == 0)
                    A::func(val);
                if( ((num / val) % 3) == 0)
                    B::func(val);
                if( ((num / val) % 5) == 0)
                    C::func(val);
            }
         }

        void check(int num) {
            cout << "Value = " << num << endl ;
            update_val(num);
            
            cout << "A's func called " << getA() << " times" << endl;
            cout << "B's func called " << getB() << " times" << endl ;
            cout << "C's func called " << getC() << " times" << endl;
        }
};


int main()
{
    D d;
    
    int num;
    cin >> num;
    
    d.check(num);

    return 0;
}
