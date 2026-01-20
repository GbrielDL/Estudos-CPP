#include <iostream>
#include <cctype>
#include <string>

#include "locale.h"
#include "funcoes.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");

    int resp;
    do{
        cout << "\n=== Remover Duplicados ===" << endl;
        string texto = LerString("Escreva qualquer coisa: ");
        string limpo;

        for (size_t c = 0; c < texto.size(); c++){
            char atual = texto[c];

            if (c+1 < texto.size() && atual == texto[c+1]){
                continue;
            }
            limpo.push_back(atual);
        }
        cout << "\nTexto digitado: " << texto << "\nTexto Limpo: " << limpo << endl;

        resp = LerInteiro("\nDeseja escrever outro texto?\n[1] Sim\n[0] Não\nOpção: ");
    } while (resp != 0);

    return 0;
}