#include <iostream>
#include <vector>
#include <algorithm>

void display(std::vector <int> v){
    for(auto x : v){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main(){

    std::vector<int> v({1,2,3,4,5});
    std::cout << v[1] << std::endl;

    int temp;

    display(v);

    temp = v[0];
    v[0] = v[1];
    v[1] = temp;

    display(v);

    std::sort(v.begin(), v.end());
    display(v);
    return 0;

}