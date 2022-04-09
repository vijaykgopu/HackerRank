#include <iostream>
using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
    public:
        int divisorSum(int n) {
            int sum = 0;
            
            for(int i = 1; i <= n; i++)
                if((n % i) == 0)
                    sum += i;
            
            return sum;
        }
};

int main(){
    int num;
    cin >> num;

    AdvancedArithmetic *myCalculator = new Calculator(); 
    cout << "I implemented: AdvancedArithmetic" << endl;
    cout << myCalculator->divisorSum(num);

    return 0;
}
