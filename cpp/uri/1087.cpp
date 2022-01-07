#include <iostream>
 
using namespace std;

bool checkDiagon(int x1, int x2, int y1, int y2){
    if((x1 + y1 == x2 + y2) || (x1 - y1 == x2 - y2)){
        return true;
    }
    else{
        return false;
    }
}


int main() {
 
    int x1, x2, y1, y2;
    
    while(cin >> x1 >> y1 >> x2 >> y2){
        if((x1 == 0) && (x2 == 0) && (y1 == 0) && (y2 == 0)){
            break;
        }
        if((x1 == x2) && (y1 == y2)){
            cout << 0 << endl;
        }
        else{
            if ((x1 == x2) || (y1 == y2) || checkDiagon(x1, x2, y1, y2)){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }                
        }
    } 
    
    return 0;
}