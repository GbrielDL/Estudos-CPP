#include <iostream>
#include <string>
#include <iomanip>

#include "locale.h"

using namespace std;

int LerInteiro(const string& msg){
    string valor;

    while (true){
        cout << msg;
        getline(cin, valor);

        if (valor.empty() || valor == "  "){
            cout << "Error! Campo vazio.\n";
            continue;
        }

        bool apenasNum = true;
        for (char c : valor){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum){
            cout << "Error! Digite apenas números.\n";
            continue;
        }
        return stoi(valor);
    }
}

string LerString(const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty() || entrada == "  "){
            cout << "Error! Campo vazio.\n";
            continue;
        }

        bool apenasLetras = true;
        for (char c : entrada){
            if (!isalpha(c) && c != ' '){
                apenasLetras = false;
                break;
            }
        }
        if (!apenasLetras) {
            cout << "Error! Digite apenas letras (A - Z)\n";
            continue;
        }

        return entrada;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese_Brazil");

    cout << "=== CONTADOR INTERMEDIÁRIO ===\n";

    string resp;
    do {
        int quant = 0;
        int soma = 0;
        int inicio = 0;
        int final = 0;
        double media;

        // Pedir dois números inteiros, Inicio e Final
        inicio = LerInteiro("Digite o número incial: ");
        final = LerInteiro("Digite o número final: ");
        // Mostrar todos os números entre eles
        cout << "\n";
        for (int i = inicio; i <= final; i++){
            cout << i << " ";

            quant++;
            soma += i;
        }
        media = (double)soma / quant;
        // Mostrar resultados (Soma, Quantidade e Média)
        cout << "\n";
        cout << "\nSoma: " << soma << "\nQuantidade: " << quant << "\nMédia: " << fixed << setprecision(2) << media;
        cout << "\n";
        resp = LerString("\nDeseja digitar outro número? [S/N] ");
    } while (toupper(resp[0]) != 'N');

    cout << "=== FIM DO PROGRAMA ===" << endl;

    return 0;
}