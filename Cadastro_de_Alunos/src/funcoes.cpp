#include <iostream>
#include <string>

// Validar String
std::string LerString(const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty() && entrada != " "){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        bool apenasLetras = true;
        for (char c : entrada){
            if (!isalpha(c) && c != ' '){
                apenasLetras = false;
                break;
            }
        }

        if (!apenasLetras){
            std::cout << "Error! Digite apenas letras (A - Z)" << std::endl;
            continue;
        }

        return entrada;
    }
}

//Ler qualquer número
float LerNum(const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty() && entrada != " "){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        bool apenasNum = true;
        for (char c : entrada){
            if (!isdigit(c)){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum){
            std::cout << "Error! Digite apenas número." << std::endl;
            continue;
        }

        return stof(entrada);
    }
}