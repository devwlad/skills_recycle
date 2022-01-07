#include <iostream>
 
using namespace std;

int alumni[500];

int checkAtt(int N, int D){
    for(int i = 0; i < N; i++){
        if (alumni[i] == D){
            return 1;
        }
    }
    return 0;
}

int main() {
 
    int N, D, X;
 
    while (cin >> N >> D){
        if ((N == 0) && (D == 0)){
            break;
        }
        
        for(int i = 0; i < N; i++){
            alumni[i] = 0;
        }
        
        for (int i = 0; i < D; i++){
            for (int j = 0; j < N; j++){
                int temp;
                cin >> temp;
                alumni[j] += temp;    
            }
        }
        if (checkAtt(N, D) == 1){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        
    }
 
    return 0;
}