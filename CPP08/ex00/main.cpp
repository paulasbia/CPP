#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
    std::cout << "Testing with vector" << std::endl;
    std::vector<int> v;
    for (int i = 0; i < 5; i++)
        v.push_back(i);

    try {
        std::vector<int>::iterator it = easyfind(v, 4);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(v, 7);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nTesting with list" << std::endl;
    std::list<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(20);
    list.push_back(2);

    try {
        std::list<int>::iterator it = easyfind(list, 20);
        std::cout << "Found value: " << *it << " , position " << std::distance(list.begin(), it) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(list, 99);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
