#include <string>
#include <iostream>
#include <cctype>

int LerNumber (const std::string& mensagem){
    std::string entrada;

    while (true){
        std::cout << mensagem;
        getline(std::cin, entrada);

        if (entrada.empty() && entrada != " "){
            std::cout << "Error! Campo vazio" << std::endl;
            continue;
        }

        bool apenasNum = true;
        for (char c : entrada){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum) {
            std::cout << "Error! Digite apenas números" << std::endl;
            continue;
        }

        return stoi(entrada);
    }
}

