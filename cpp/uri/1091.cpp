#include <iostream>

/*
Input

The input contains several test cases. The first line of a test case contains one integer K indicating the number of queries that will be made (0 < K ≤ 10^3). 
The second line of a test case contains two integers N and M representing the coordinates of the division point (-10^4 < N, M < 10^4). 
Each of the K following lines contains two integers X and Y representing the coordinates of a residence (-10^4 ≤ X, Y ≤ 10^4).

The end of input is indicated by a line containing only the number zero.
Output

For each test case in the input, your program must print one line containing:

    the word divisa (means border in Portuguese) if the residence is on one of the border lines (North-South or East-West);
    NO (means NW in Portuguese) if the residence is in Northwestern Nlogonia;
    NE if the residence is in Northeastern Nlogonia;
    SE if the residence is in Southeastern Nlogonia;
    SO (means SW in Portuguese) if the residence is in Southwestern Nlogonia.
*/

#include <iostream>
 
using namespace std;
 
int main() {
    int k = -1; 
    int m, n, x, y;
    while(k != 0){
        cin >> k;
        
        if (k == 0){
            break;
        }
        
        cin >> m >> n;
        
        for (int i = 0; i < k; i++){
            cin >> x >> y;
            if ((x == m) || (y == n)){
                cout << "divisa" << endl;
            }
            else{
                if(x > m){
                    if (y > n){
                        cout << "NE" << endl;
                    }
                    else{
                        cout << "SE" << endl;
                    }
                }
                else{
                    if (y > n){
                        cout << "NO" << endl;    
                    }
                    else{
                        cout << "SO" << endl;
                    }
                }
            }
        }
    }
 
    return 0;
}
