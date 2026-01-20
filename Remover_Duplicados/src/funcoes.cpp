#include <iostream>
#include <string>
#include <cctype>

// Ler String, aceita números etc
std::string LerString (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        bool soEspaco = true;
        for (char& c : entrada){
            if (!isspace(c)){
                soEspaco = false;
                break;
            }
        }

        if (entrada.empty() || soEspaco){
            std::cout << "- Error! Campo vazio" << std::endl;
            continue;
        }

        return entrada;
    }
}
// Ler apenas Número inteiro
int LerInteiro(const std::string& msg){
    std::string entrada;

    while(true){
        std::cout << msg;
        getline(std::cin, entrada);

        bool soEspaco = true;
        for (char& c : entrada){
            if(!isspace(c)){
                soEspaco = false;
                break;
            }
        }

        if (entrada.empty() || soEspaco){
            std::cout << "- Error! Campo vazio" << std::endl;
            continue;
        }

        bool soDigitos = true;
        for (char& c : entrada){
            if (!isdigit(c)){
                soDigitos = false;
                break;
            }
        }

        if (!soDigitos){
            std::cout << "- Error! Digite apenas números." << std::endl;
            continue;
        }

        try
        {
            return stoi(entrada);
        }
        catch(...)
        {
            std::cout << "Valor inválido" << std::endl;
        }
    }
}