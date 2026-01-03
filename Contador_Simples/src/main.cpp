#include <iostream>
#include <string>
#include "locale.h"

using namespace std;

int LerInteiro(const string& msg) {
    string entrada;

    while(true) {
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty() || entrada == " "){
            cout << "Error! Campo vazio." << endl;
            continue;
        }

        bool apenasNum = true;
        for (char c : entrada){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
            }
        }

        if (!apenasNum){
            cout << "Error! Digite apenas números.\n";
            continue;
        }
        return stoi(entrada);
    }
}

string LerString (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty() || entrada == " "){
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

    cout << "\n=== Contador Simples de 1 até o número digitado ===\n";

    int number;
    string resp;
    do {
        number = LerInteiro("Digite um número: ");
        for (int n = 1; n <= number; n++){
            cout << n << endl;
        }
        
        resp = LerString("Deseja digitar outro número? [S/N] ");
    } while(toupper(resp[0]) != 'N');

    return 0;
}