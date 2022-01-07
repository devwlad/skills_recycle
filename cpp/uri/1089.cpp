#include <iostream>
int wave[10000];
int N;

using namespace std;

bool checkPeak(int i){
    if (i == 0){
        if (((wave[i] > wave[i+1]) && (wave[i] > wave[N-1]) )||
            ((wave[i] < wave[i+1]) && (wave[i] < wave[N-1]) )){
                return true;
        } else{
            return false;
        }
    } else if(i == N-1){
        if (((wave[N-1] > wave[0]) && (wave[N-1] > wave[N-2]) )||
            ((wave[N-1] < wave[0]) && (wave[N-1] < wave[N-2]) )){
                return true;
        } else{
            return false;
        }
    } else {
        if (((wave[i] > wave[i+1]) && (wave[i] > wave[i-1]) )||
            ((wave[i] < wave[i+1]) && (wave[i] < wave[i-1]) )){
                return true;
        } else{
            return false;
        }
    }
}

int main() {
 
    while (cin >> N){
        if (N == 0){
            break;
        }
        int peak = 0;
        for (int i = 0; i < N; i++){
            cin >> wave[i];
        }
        for (int i = 0; i < N; i++){
            if (checkPeak(i)){
                peak++;
            }
        }
        cout << peak << endl;
    }
 
    return 0;
}