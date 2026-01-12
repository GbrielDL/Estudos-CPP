#include <string>
#include <iostream>
#include <cctype>

// LerInteiro
int LerInteiro (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty()){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        bool apenasNum = true;
        for (char c : entrada){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum){
            std::cout << "Error! Digite apenas número." << std::endl;
            continue;
        }

        return stoi(entrada);
    }
}

// Ler String
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