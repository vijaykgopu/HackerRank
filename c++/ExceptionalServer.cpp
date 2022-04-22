#include <vector>
#include <iostream>

using namespace std;

class Server {
    private:
        static int load;

    public:
        static int compute(long long A, long long B) {
            load += 1;
        
            if(A < 0)
                throw invalid_argument("A is negative");
        
            if(B == 0) 
                throw 0;
                
            vector <int> v(A, 0);
            int real = ( A / B) * -1;
            int ans = v.at(B);
            
            return real + A - B * ans;
        }

        static int getLoad() {
            return load;
        }
};

int Server::load = 0;

int main() {
    int T; 
    cin >> T;
    
    while(T--) {
        long long A, B;
        cin >> A >> B;

        try {
            cout << Server::compute(A, B) << endl;
        } catch (bad_alloc) {
            cout << "Not enough memory" << endl;
        }catch (exception &e) {
            cout << "Exception: " << e.what() << endl;
        }catch (...) {
            cout << "Other Exception" << endl;
        }        
    }

    cout << Server::getLoad() << endl;

    return 0;
}
