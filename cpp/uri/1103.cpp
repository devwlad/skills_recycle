#include <iostream>
 
using namespace std;
 
int main() {
 
    int h1,h2, m1, m2;
    
    while (cin >> h1 >> m1 >> h2 >> m2){
        int min1, min2;
        int minSleep;
        if((h1==0) && (m1==0) && (h2==0) && (m2==0)){
            break;
        }
        min1 = 60*h1 + m1;
        min2 = 60*h2 + m2;
        
        if (min1 == min2){
            cout << 0 << endl;
        }
        else{
            if(min1 < min2){
                cout << min2 - min1 << endl;
            }
            else{
                cout << 1440 - min1 + min2 << endl;
            }
        }
        
        
    }
 
    return 0;
}