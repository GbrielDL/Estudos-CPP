#include <iostream>
#include <string>
#include <cctype>

// Validar String
std::string LerString (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty()){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        bool apenasLetras = true;
        for (const char& c : entrada){
            if (!isalpha(c)) {
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
// Validar telefone, retorna ja formatado
std::string LerTelefone (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty()){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        std::string telefone;
        for (size_t e = 0; e < entrada.size(); e++){
            char& c = entrada[e];

            if (isdigit(c)){
                telefone += c;
            }
        }

        // Formatando número de telefone (00) 00000-0000
        if (telefone.size() == 11){
            return "(" + telefone.substr(0, 2) + ") " + telefone.substr(2, 5) + "-" + telefone.substr(7, 4);
        } else if (telefone.size() == 10){
            return "(" + telefone.substr(0, 2) + ") " + telefone.substr(2, 4) + "-" + telefone.substr(6, 4);
        }

        std::cout << "- Número Inválido" << std::endl;
        continue;
    }
}
// Ler Número inteiro
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
        for (const char& c : entrada){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum) {
            std::cout << "Error! Digite apenas Número." << std::endl;
            continue;
        }

        try
        {
            return std::stoi(entrada);
        }
        catch(...)
        {
            std::cout << "- Valor Inválido" << std::endl;
            continue;
        }
    }
}