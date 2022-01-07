#include <iostream>
 
using namespace std;
 
int main() {
 
    int size[31];
    int N, M;
    char L;
    int pairs;
    
    while(scanf("%d", &N)!= EOF){
        pairs = 0;
        for (int i = 0; i < 31; i++){
            size[i] = 0;
        }
        for (int i = 0; i < N; i++){
            cin >> M >> L;
            if(L == 'D'){
                if (size[M-30] < 0){
                    pairs++;
                }
                size[M-30]++;
            }
            else{
                if (size[M-30] > 0){
                    pairs++;
                }
                size[M-30]--;
            }
        }
        cout << pairs << endl;
    } 
    return 0;
}