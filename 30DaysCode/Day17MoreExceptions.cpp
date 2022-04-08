#include <iostream>
#include <cmath>

using namespace std;

class Calculator{
    public:
    int power(int n, int p){
        if ((n < 0) || (p < 0))
            throw invalid_argument ("n and p should be non-negative");
    
        return pow(n, p);
    }
};

int main(){
    Calculator myCalculator;
    int n;
    int p;

    int count;
    cin >> count;
        
    while(count--){
        cin >> n >> p;
        
        try{
            cout << myCalculator.power(n, p) << endl; 
         } catch(exception &e) {
            cout << e.what() << endl;
         }
    }
        
    return 0;
}
