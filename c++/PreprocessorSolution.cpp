#define INF 10000000
#define toStr(S) #S
#define io(v) cin >> v
#define foreach(v, i) for(int i = 0; i < v.size(); i++)
#define FUNCTION(name, op) void name(int &a, int b) { if (b op a) a = b; }

#include <iostream>
#include <vector>

using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int N; 
    cin >> N;

    vector<int> x(N);

    foreach(x, i)
        io(x)[i];

    int mn = INF;
    int mx = -INF;

    foreach(x, i){
        minimum(mn, x[i]);
        maximum(mx, x[i]);
    }
    
    int Z = mx - mn;
    cout << toStr(Result =) << ' ' << Z;

    return 0;
}
