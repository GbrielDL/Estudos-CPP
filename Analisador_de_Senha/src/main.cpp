#include <iostream>
#include <string>
#include <cctype>

#include "locale.h"
#include "funcoes.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");

    cout << "=== Senha deve ter letras maiúsculas, minúsculas, números, símbolos e no mínimo 8 caractere ===" << endl;

    while (true){
        bool maiuscula = false;
        bool minuscula = false;
        bool numero = false;
        bool simbolo = false;
        // Ler e Armazena a senha
        string senha = LerString("Cadastre uma Senha: ");

        if (senha.size() < 8){ // Só permite 8 caractere ou mais
            cout << "- Error! A senha deve ter no mínimo 8 caractere." << endl;
            continue;
        }
        // Passa por cada Caractere e verfica se está tudo ok
        for (char c : senha){
            if (isdigit(c)){
                numero = true;
            }
            if (isupper(c)){
                maiuscula = true;
            }
            if (islower(c)){
                minuscula = true;    
            }
            if (ispunct(c)){
                simbolo = true;
            }
        }
        if (!maiuscula || !minuscula || !numero || !simbolo){
            if (!maiuscula){
                cout << "Error! A senha tem que ter ao menos UMA letra Maiúscula." << endl;
            }
            if (!minuscula){
                cout << "Error! A senha tem que ter ao menos UMA letras Minúscula" << endl;
            }
            if (!numero){
                cout << "Error! A senha tem que ter ao menos UM número." << endl;
            }
            if (!simbolo){
                cout << "Error! A senha tem que ter ao menos UM Caractere Especial" << endl;
            }

            continue;
        }
        break;
    }
    cout << "Senha válida. Bem vindo!" << endl;

    return 0;
}