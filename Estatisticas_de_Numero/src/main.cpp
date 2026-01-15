#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <iomanip>

#include "locale.h"
#include "funcoes.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");

    vector<int> numeros;
    int resp=0, soma=0, soma_par=0, soma_impar=0;
    int maior = numeric_limits<int>::min();
    int menor = numeric_limits<int>::max();
    // Ler números até o usuário digitar 0
    do {
        resp = LerNum("Digite qualquer valor inteiro [0 para sair]: ");
        // Armazenar em um Vector
        if (resp != 0){
            numeros.push_back(resp);
        }
    } while (resp != 0);

    for (int n : numeros){
        soma += n;
        // Maior Número
        if (n > maior){
            maior = n;
        } 
        // Menor Número 
        if (n < menor){
            menor = n;
        }
        // Quantos são pares e quantos são ímpares
        if (n % 2 == 0){
            soma_par++;
        } else {
            soma_impar++;
        }
    }
    // Média
    float media = static_cast<float>(soma) / numeros.size();
    // Mostrar resultado
    cout << "\n=== Resultado ===\nMaior Número: " << maior << "\nMenor Número: " << menor << "\nMédia: " << fixed << setprecision(1) << media << "\nQuantidade Par: " << soma_par << "\nQuantidade Ímpar: " << soma_impar << endl;

    return 0;
}