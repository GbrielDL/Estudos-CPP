#include <iostream>
#include <string>
#include <cctype>

int LerNum (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty()){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        bool valido = true;
        bool ponto = false;

        for (size_t n = 0; n < entrada.size(); n++){
            char& c = entrada[n];

            // Aceitar vírgula como ponto
            if (c == ',') c = '.';
            // Sinal só no início
            if ((c == '+' || c == '-') && n == 0){
                continue;
            }
            if (isdigit(c)){
                continue;
            }
            // Apenas um ponto decimal
            if (c == '.' && !ponto){
                ponto = true;
                continue;
            }

            valido = false;
            break;
        }
        
        if (!valido){
            std::cout << "Error! Digite um número válido." << std::endl;
            continue;
        } 

        try
        {
            return std::stof(entrada);
        }
        catch(...)
        {
            std::cout << "Error! Número inválido." << std::endl;
        }
        
    }
}