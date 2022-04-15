#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int num){
    if(num < 2)
        return false;

    if(num == 2)
        return true;

    int loop = ceil(sqrt(num));
        
    for(int i = 2; i <= loop; i++){
        if( (num % i) == 0)
            return false;
    }
    
    return true;
}

int main() {
    int count;
    cin >> count;
    
    for(int i = 0; i < count; i++){
        int num;
        cin >> num;
        
        isPrime(num) ? cout << "Prime" << endl : cout << "Not prime" << endl;
    }
        
    return 0;
}
