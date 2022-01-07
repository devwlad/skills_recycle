#include <iostream>
#include <list>

void display(std::list <int> l){
    for(auto i : l){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::list<int> l({1,2,3,4,5});

    display(l);
    l.reverse();
    display(l);
    l.sort();
    display(l);

    std::cout << l.front() << " " << l.back() << std::endl;
}