#include "iter.hpp"

void    addName(std::string &s)
{
    s += "keep working";
}

void printString(const std::string& s)
{
    std::cout << s << " ";
}

void addNumber(int &n)
{
    n += 42;
}

int main()
{
    std::cout << "Test 01 \n";

    std::string str[] = {"Hello world, ", "Good news, ", "Good morning, "};

    ::iter(str, 3, &addName);

    for(int i = 0; i < 3; i++)
        std::cout << str[i] << std::endl;

    std::cout << "\nTest 02 \n";

    int numbers[] = {1, 2, 3, 4, 5};

    ::iter(numbers, 5, &addNumber);

    for(int i = 0; i < 5; i++)
        std::cout << numbers[i] << std::endl;

    std::cout << "\nTest 03 - const function:\n";
    ::iter(str, 1, printString);
    std::cout << std::endl;
}

