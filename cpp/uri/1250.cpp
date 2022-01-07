#include <iostream>
 
using namespace std;
int shots[50];
char jumps[50];
int hits;

int main() {
 
    int N, S;
    
    while(scanf("%d",&N) != EOF){
        cin >> S;
        hits = 0;
        
        for(int i = 0; i < S; i++){
            cin >> shots[i];
        }
        cin.getline(jumps, S);
        
        for(int i = 0; i < S; i++){
            if(jumps[i] == 'S'){
                if(shots[i] <= 2){
                    hits++;
                }
            }
            else{
                if(shots[i] > 2){
                    hits++;
                }
            }
        }
        cout << hits << endl;
    }
    return 0;
}