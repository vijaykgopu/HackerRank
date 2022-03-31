#include <iostream>
#include <vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    cin >> count;
    
    vector<int> integers;
    
    for(int i = 0; i < count; i++){
        int num;
        cin >> num;
        integers.push_back(num);
    }

    int index;
    cin >> index;
    integers.erase(integers.begin() + index -1);
    
    int start, end;
    cin >> start >> end;
    integers.erase(integers.begin() + start -1, integers.begin() + end -1);

    cout << integers.size() << endl;
    for(int i = 0; i < integers.size(); i++)
        cout << integers[i] << " ";

    return 0;
}
