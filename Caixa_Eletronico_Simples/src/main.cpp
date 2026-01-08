#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

#include "funcoes.h"
#include "locale.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");

    double saldo = 1000;
    int resp;
    double depositar, sacar;

    do {
        cout << "\n=== Caixa Eletrónico ===\n1 - Ver saldo\n2 - Depositar\n3 - Sacar\n0 - Sair" << endl;
        resp = LerInteiro("Opção: ");

        switch (resp)
        {
        case 1:
            MostrarSaldo(saldo);
            break;
        case 2:
            depositar = LerInteiro("Quanto deseja Depositar? R$");
            saldo += depositar;
            cout << "Saldo depositado com sucesso!" << endl;
            break;
        case 3:
            sacar = LerInteiro("Quanto deseja Sacar? R$");
            if (sacar > saldo){
                cout << "Saque inválido, você não tem este valor." << endl;
            }
            else {
                saldo -= sacar;
                cout << "Saque bem sucedido!" << endl;
            }
            break;
        default:
            cout << "Valor inválido." << endl;
            break;
        }
    } while (resp != 0);

    return 0;
}