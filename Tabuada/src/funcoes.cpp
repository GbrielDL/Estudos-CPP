#include <iostream>
#include "funcoes.h"
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

int LerInteiro (const std::string& msg){
    string entrada;

    while (true) {
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty()) { // Verifica se o campo est� vazio
            cout << "Error! Campo vazio.\n";
            continue;
        }
        bool apenasNum = true;

        for (auto& c : entrada){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
                break;
            }
        }
        if (!apenasNum) {
            cout << "Error! Digite apenas n�mero.\n";
            continue;
        }
        // Converte string para int
        return stoi(entrada);
    }
}

void Tabuada (int num) {
    for (int cont = 1; cont <= 10; cont++) {
        cout << setw(2) << cont << " x " << num << " = " << num * cont << endl;
    }
}

std::string LerString (const std::string& msg) {
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty()){
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

        if (!apenasLetras){
            cout << "Error! Digita apenas letras (A - Z)\n";
            continue;
        }
        return entrada;
    }
}