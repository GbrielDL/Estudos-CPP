#include <iostream>
#include <string>
#include <cctype>

std::string LerString (const std::string& msg){
     std::string entrada;

     while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty() && entrada != " "){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        return entrada;
     }
}