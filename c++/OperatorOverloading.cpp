#include <vector>
#include <iostream>

using namespace std;

class Matrix{
    public:
        vector <vector <int>> a;
        
        Matrix operator + (Matrix &temp){
            
            for (int i = 0; i < this->a.size(); i++) 
                for (int j = 0; j < this->a[i].size(); j++) 
                    this->a[i][j] += temp.a[i][j];

            return *this;            
        }
        
};

int main () {
    int cases;
    cin >> cases;

    for(int k = 0; k < cases; k++) {
        Matrix x;
        Matrix y;
        Matrix result;

        int n, m;
        cin >> n >> m;

        for(int i = 0; i < n; i++) {
            vector <int> b;
            int num;
            
            for(int j = 0; j < m; j++) {
                cin >> num;
                b.push_back(num);
            }

            x.a.push_back(b);
        }
        
        for(int i = 0; i < n; i++) {
            vector<int> b;
            int num;
            
            for(int j = 0; j < m; j++) {
                cin >> num;
                b.push_back(num);
            }
        
            y.a.push_back(b);
        }
        
        result = x + y;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++)
                cout << result.a[i][j] << " ";
            cout << endl;
        }
    }
      
    return 0;
}
