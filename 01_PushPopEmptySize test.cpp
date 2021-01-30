/* 01_PushPopEmptySize.cpp

   B. Bird - 08/10/2019
*/

#include <iostream>
#include <string>
#include "linkedlist.hpp"

int main(){

    LinkedList<int> L {};

    std::cout << "Initial Size: " << L.size() << std::endl;
    //extra shit added
    auto print_int = [](int const& i){
        std::cout << i << " ";
    };
    
    //std::cout << "Initial list L: "<< std::endl;
    //L.apply(print_int);

    L.push_front(6);
    //std::cout << "after pushfront 6 "<< std::endl;
    //L.apply(print_int);

    L.push_back(10);
    //std::cout << "after pushback 10"<< std::endl;
    //L.apply(print_int);

    L.push_back(17);
    //std::cout << "after pushback 17"<< std::endl;
    //L.apply(print_int);

    L.push_front(187);
    //std::cout << "after pushfront 187 "<< std::endl;
    //L.apply(print_int);


    std::cout << "Size: " << L.size() << std::endl;

    std::cout << "Last element: " << L.last() << std::endl;
    std::cout << "pop_back returns " << L.pop_back() << std::endl;
    
    while(!L.is_empty()){
        std::cout << "Element: " << L.first() << std::endl;
        std::cout << "Popped " << L.pop_front() << std::endl;
    }

    return 0;
}