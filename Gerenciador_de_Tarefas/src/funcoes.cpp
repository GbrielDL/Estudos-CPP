#include <iostream>
#include <string>
#include <cctype>

// Mostra mensagem de campo vazio
void CampoVazio (){
    std::cout << "Error! Campo vazio." << std::endl;
}
// Ler Número
int LerNumero (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty()){
            CampoVazio();
            continue;
        }

        bool apenasNum = true;
        for (unsigned char c : entrada){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum){
            std::cout << "Error! Digite apenas números." << std::endl;
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
            CampoVazio();
            continue;
        }

        return entrada;
    }
}