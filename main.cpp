#include <iostream>

void lexer(const std::string& input){
    for(char c: input){
        if(std::isdigit(c)){
            std::cout << "is digit" << std::endl;
        }
        else if(std::isalpha(c)){
            std::cout << "is letter" << std::endl;
        }
        std::cout << "symbol" << std::endl;
    }
}

int main() {
    std::string input;
    std::cout << "input: ";
    std::cin >> input;
    lexer(input);
    return 0;
}