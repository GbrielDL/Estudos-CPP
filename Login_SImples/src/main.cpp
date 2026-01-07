#include <iostream>
#include <string>
#include <locale.h>

#include "funcoes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese_Brazil");

    const string user = "admin";
    const string password = "123";

    string usuario, senha;

    do {
        usuario = LerString("Usuário: ");
        senha = LerString("Senha: ");

        if (usuario != user || senha != password){
             cout << "Error! Usuário ou Senha incorretos" << endl;
        }
    } while (usuario != user || senha != password);

    cout << "\n=== Bem vindo " << user << " ===" << endl;

    return 0;
}