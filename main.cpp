#include <iostream>
#include <fstream>
void lexer(const std::string& input){
    for(char c: input){
        if(std::isspace(c)){
            std::cout << "space" << std::endl;
        }
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

    std::ifstream file("input.txt");
    if(!file.is_open()){
        std::cerr << "Error:Could not open the file!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file,line)){
        
        std::cout << "Processing" << std::endl;
        lexer(line);
    }

    file.close();
   
    return 0;
}