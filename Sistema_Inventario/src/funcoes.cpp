#include <iostream>
#include <string>

// Campo vazio
bool CampoVazio (const std::string& msg){
    std::string entrada = msg;
    bool soEspaco = true;
    // Verifica se tem alguma letra
    for (char& c : entrada){
        if (!isspace(c)){
            soEspaco = false;
            break;
        }
    }
    // Verifica se está vazio ou se tem apenas espaços
    if (entrada.empty() || soEspaco){
        return true;
    } else{
        return false;
    }
}
// Ler Número inteiro
int LerInteiro (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (CampoVazio(entrada)){
            std::cout << "- Error! Campo vazio." << std::endl;
            continue;
        }

        bool apenasNum = true;
        for (char& c : entrada){ // Verifica se tem apenas números 
            if (!isdigit(c)){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum) {
            std::cout << "- Error! Valor inteiro inválido" << std::endl;
            continue;
        }

        try
        {
            return stoi(entrada);
        }
        catch(...)
        {
            std::cout << "- Valor inválido" << std::endl;
        }
        
    }
}
// Ler Qualquer número
float LerNumero (const std::string& msg){
    std::string entrada;
    
    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (CampoVazio(entrada)){
            std::cout << "- Error! Campo vazio." << std::endl;
            continue;
        }

        bool apenasNum = true;
        bool pontoUsado = false;

        for (char& c : entrada){
            if (c == ',') c = '.'; // Vírgula é transformada em ponto

            if (c == '.'){
                if (pontoUsado){
                    apenasNum = false; // Dois pontos = inválido
                    break;
                } 
                pontoUsado = true;
                continue;
            }

            if (!isdigit(c)){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum){
            std::cout << "- Error! Digite apenas número." << std::endl;
            continue;
        }

        try {
            return stof(entrada);
        } catch(...){
            std::cout << "- Valor inválido" << std::endl;
        }
    }
}
// Ler String
std::string LerString (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (CampoVazio(entrada)){
            std::cout << "- Error! Campo vazio." << std::endl;
            continue;
        }

        return entrada;
    }
}