#include <iostream>
#include "funcoes.h"
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese_Brazil");

    cout << "=== TABUADA ===" << endl;
    string resp;

    do{
        int num = LerInteiro("Digite um número para ver a Tabuada: ");
        Tabuada(num);

        resp = LerString("Deseja digitar outro número? [S/N] ");
    } while (toupper(resp[0]) != 'N');

    cout << "=== Fim do programa ===" << endl;

    return 0;
}