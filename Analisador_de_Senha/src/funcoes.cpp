#include <iostream>
#include <string>

// LerString
std::string LerString (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty()){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        return entrada;
    }
}