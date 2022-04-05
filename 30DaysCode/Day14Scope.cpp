#include <vector>
#include <iostream>

using namespace std;

class Difference {
    private:
        vector<int> elements;
        int maxDiff;
  
    public:
        Difference(vector<int> a): elements(a) { 
        }

        void computeDifference(){
            int min = elements[0];
            int max = elements[0];

            for (int i = 0; i < elements.size(); i++) {
                if(min > elements[i])
                    min  = elements[i];

                if(max < elements[i])
                    max  = elements[i];        
            }
            
            maxDiff = max - min;
        }

        int maximumDifference(){
            return maxDiff;
        }    
};

int main() {
    vector<int> a;

    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        a.push_back(e);
    }
    
    Difference d(a);
    d.computeDifference();
    cout << d.maximumDifference();
    
    return 0;
}
