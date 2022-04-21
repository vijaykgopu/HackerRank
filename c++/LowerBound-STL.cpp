#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector <int> X(N);
    for(int i = 0; i < N; i++)
        cin >> X[i];
    
    int Q;
    cin >> Q;
    
    for(int i = 0; i < Q; i++) {
        int Y;
        cin >> Y;

        auto low = lower_bound(X.begin(), X.end(), Y);
        int index = low - X.begin();
        
        if (X[index] == Y) 
            cout << "Yes " << (index + 1) << endl;
        else
            cout << "No " << (index + 1) << endl;
    }
        
    return 0;
}
