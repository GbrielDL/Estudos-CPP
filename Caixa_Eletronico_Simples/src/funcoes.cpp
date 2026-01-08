#include <iostream>
#include <string>
#include <iomanip>

int LerInteiro (const std::string& msg){
    std::string entrada;

    while (true){
        std::cout << msg;
        getline(std::cin, entrada);

        if (entrada.empty() && entrada != " "){
            std::cout << "Error! Campo vazio." << std::endl;
            continue;
        }

        bool apenasDigito = true;

        for (char c : entrada){
            if (!isdigit(c) && c != ' '){
                apenasDigito = false;
                break;
            }
        }
        
        if (!apenasDigito){
            std::cout << "Error! Digite apenas Números." << std::endl;
            continue;
        }

        return stoi(entrada);
    }
}
// Função simples para mostrar o saldo atual
void MostrarSaldo (const double& saldo){
    std::cout << "      == Conta ==\n\nSaldo Atual: R$" << std::fixed << std::setprecision(2) << saldo << std::endl;
}
