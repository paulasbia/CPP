#include "Array.hpp"

int main(){
    Array<std::string>  def1;
    Array<int>          def2;

    Array<int>          zero(0);
    Array<int>          param(5);
    Array<int>          copy1(def2);
    Array<int>          copy2(param);

    def1.print_values();
    def2.print_values();
    zero.print_values();
    param.print_values();
    copy1.print_values();
    copy2.print_values();

    Array<std::string>  words(2);

    try{
        words[0] = "Hello";
        words[1] = "World";
        words[2] = "!";
    } catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}