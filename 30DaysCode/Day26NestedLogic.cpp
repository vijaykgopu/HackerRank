#include <iostream>
using namespace std;

int calculateFine(int d2, int m2, int y2, int d1, int m1, int y1){
    int fine = 0;

    if(y2 > y1){
        fine  = 10000;
    }else if ((y2 == y1) && (m2 > m1)){
        fine  = (m2 - m1) * 500;
    }else if ((y2 == y1) && (m2 == m1) && (d2 > d1)){
        fine  = (d2 - d1) * 15;
    }
    
    return fine;   
}

int main() {
    string d1, m1, y1;
    string d2, m2, y2;
    
    cin >> d2 >> m2 >> y2;
    cin >> d1 >> m1 >> y1;
    
    cout << calculateFine(stoi(d2), stoi(m2), stoi(y2), stoi(d1), stoi(m1), stoi(y1));

    return 0;
}
