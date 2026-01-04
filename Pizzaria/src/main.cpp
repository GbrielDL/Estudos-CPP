#include <iostream>
#include <string>
#include <iomanip>

#include <locale.h>
#include "funcoes.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");

    cout << "   === PIZZARIA FREDDY ===\n\nEscolha sua Pizza no MENU abaixo:\n";
    // Menu dos Sabores
    for (int s = (int)SaboresPizza::Calabresa; s < (int)SaboresPizza::FINAL; s++){
        SaboresPizza sabor = static_cast<SaboresPizza>(s);

        cout << s+1 << " - " << MostrarSabor(sabor) << endl;
    }
    // Armazenar escolha
    int opcao;
    while (true){
        opcao = LerInteiro("Opção: ");

        if (opcao < 1 || opcao > (int)SaboresPizza::FINAL){
            cout << "Error! Opção inválida.\n";
            continue;
        }
        break;
    }
    SaboresPizza sabor = static_cast<SaboresPizza>(opcao-1);
    char tamanho;
    while (true){
        tamanho = toupper(LerCaractere("Ótimo! Agora escolha o Tamanaho 'P' 'M' 'G': "));

        if (tamanho != 'P' && tamanho != 'M' && tamanho != 'G'){
            cout << "Error! Digite um tamanho válido.\n";
            continue;
        }
        break;
    }
    // Oferecer Bebida
    char escolha = toupper(LerCaractere("Você escolheu uma Pizza sabor " + MostrarSabor(sabor) + ". Tamanho '" + static_cast<char>(tamanho) + "'. Alguma coisa pra beber? [S/N]: ")); // static_cast<char>(toupper(tamanho)) converte o ASCII do Caractere em Char

    if (escolha == 'S'){
        cout << "\n   === Menu de Bebidas ===\n";
        // Mostra o Menu das Bebidas
        for (int b = (int)Bebidas::CocaCola; b < (int)Bebidas::FINAL; b++){
            Bebidas bebida = static_cast<Bebidas>(b);

            cout << b+1 << " - " << MostrarBebida(bebida) << endl;
        }
        int opcao;
        while (true){
            opcao = LerInteiro("Opção: ");

            if (opcao < 1 || opcao > (int)Bebidas::FINAL){
                cout << "Opção inválida.\n";
                continue;
            }
            // Armazenar Bebida
            Bebidas bebida = static_cast<Bebidas>(opcao-1);
            double valor_bebida = PrecoBebida(bebida);

            cout << "\n   === Seu Pedido ===\nPizza: " << MostrarSabor(sabor) << "\nTamanho: " << static_cast<char>(tamanho) << "\nBebida: " << MostrarBebida(bebida) << "\nValor Total: R$" << fixed << setprecision(2) << (PrecoPizza(sabor, tamanho) + valor_bebida) << endl;

            break;
        }
    }   
    else{
        cout << "\n   === Seu Pedido ===\nPizza: " << MostrarSabor(sabor) << "\nTamanho: " << static_cast<char>(tamanho) << "\nValor Total: R$" << fixed << setprecision(2) << PrecoPizza(sabor, tamanho) << endl;
    }


    return 0;
}