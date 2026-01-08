#include <iostream>
#include <string>

#include "funcoes.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");

    int resp;

    do {
        int valor = LerNumber("Digite um valor: ");

        cout << "\n";
        if (valor % 2 == 1){
            cout << valor << " é um número Primo." << endl;
        } else {
            cout << valor << " não é um número Primo." << endl;
        }

        resp = LerNumber("\nDeseja digitar outro Valor? \n[0] Não\n[1] Sim\nOpção: ");
    } while (resp != 0);

    cout << "=== Fim do Programa ===" << endl;

    return 0;
}