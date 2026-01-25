#include <iostream>
#include <string>
#include <vector>

#include "locale.h"
#include "funcoes.h"

using namespace std;

struct Item // Armazena características do Item
{
    string nome;
    int quantidade;
    float peso;
};


int main(){
    setlocale(LC_ALL, "portuguese_Brazil");
    setlocale(LC_NUMERIC, "C"); // categoria de locale que controla como números são interpretados

    vector<Item> itens; // Cria uma lista para os itens
    Item novo_item; // Novos itens que serão adicionados na lista

    int choice;
    // MENU
    do {
        cout << "\n=== Inventário ===" << endl;
        choice = LerInteiro("[1] Adicionar Item\n[2] Usar Item\n[3] Remover Item\n[4] Olhar Inventário\n[0] Sair\nEscolha: ");

        if (choice < 0 || choice > 4){
            cout << "- Opção inválida." << endl;
            continue;
        }
        // Ação das Opções
        switch (choice){
            case 1: {// Adicionar
                novo_item.nome = LerString("\nNome do Item: ");
                novo_item.quantidade = LerInteiro("Quantidade: ");
                novo_item.peso = LerNumero("Peso (Kg): ");

                itens.push_back(novo_item);
                cout << "- Item Adicionado com sucesso." << endl;
                break;
            }
            case 2: {// Usar item
                bool submenu = false;
                while (!submenu) {
                    cout << "\nPesquisar e Usar Item" << endl;
                    int escolha = LerInteiro("[1] Procurar por ID\n[2] Procurar por Nome\n[0] Voltar\nEscolha: ");

                    if (escolha == 1){
                        int ID = LerInteiro("\nDigite o ID do Item: ");

                        if (ID >= 0 && ID < itens.size()){
                            cout << itens[ID].nome << " | " << itens[ID].quantidade << " | " << itens[ID].peso << "Kg" << endl;

                            int quant = LerInteiro("Qual a quantidade que deseja usar? ");
                            if (quant > itens[ID].quantidade){
                                cout << "- Valor inválido" << endl;
                                continue;
                            } else {
                                itens[ID].quantidade -= quant;
                                cout << "- Item Usado." << endl;
                                break;
                            }
                        } else{
                            cout << "- ID inválido." << endl;
                            continue;
                        }
                    }
                    if (escolha == 2){
                        string nome = LerString("\nDigite exatamente o Nome do Item: ");
                        bool encontrado = false;
                                       
                        for (auto& item : itens){
                            if (item.nome == nome){
                                cout << item.nome << " | " << item.quantidade << " | " << item.peso << "Kg" << endl;

                                while (true){
                                    int quant = LerInteiro("Qual a quantidade que deseja usar? ");
                                    if (quant > item.quantidade){
                                        cout << "- Valor inválido" << endl;
                                        continue;
                                    }
                                    else {
                                        item.quantidade -= quant;
                                        cout << "- Item usado." << endl;
                                        submenu = true;
                                        break;
                                    }
                                }
                                encontrado = true;
                                break;
                            }
                        }

                        if (!encontrado){
                            cout << "- Item não encontrado." << endl;
                            continue;
                        }
                    }   

                    if (escolha == 0){
                        submenu = true;
                    }
                    
                    else if (escolha < 0 && escolha > 2){
                        cout << "- Valor inválido" << endl;
                        continue;
                    }
                }
                break;
            }
            case 3: {// Remover item
                if (itens.empty()){
                    cout << "\n- Inventário vazio." << endl;
                    break;
                }
                int ID;

                while (true){
                    ID = LerInteiro("\nDigite o ID do item que deseja remover: ");

                    if (ID < 0 || ID >= itens.size()){
                        cout << "- ID inválido" << endl;
                        continue;
                    } else {
                        break;
                    }
                }   
                cout << ID << ". " << itens[ID].nome << " | " << itens[ID].quantidade << " | " << itens[ID].peso << "Kg" << endl;

                while (true){
                    int remover = LerInteiro("\n[1] Revomer quantidade\n[2] Remover Tudo\nOpção: ");

                    if (remover == 1 || remover == 2){
                        if (remover == 1){
                            int quant = LerInteiro("Quantidade que deseja remover: ");
                            itens[ID].quantidade -= quant;

                            cout << quant << " " << itens[ID].nome << " removido." << endl;
                        }
                        if (remover == 2){
                            itens.erase(itens.begin() + ID);
                            cout << "- " << itens[ID].nome << " removido do inventário." << endl;
                        }
                        break;
                    } else {
                        cout << "- Opção inválida" << endl;
                        continue;
                    }
                }
                break;
            }
            case 4: {//Mostrar
                if (itens.empty()){
                    cout << "\n- Inventário vazio." << endl;
                    break;
                }   
                cout << "\nID Nome  Quantidade  Peso" << endl;
                for (size_t i = 0; i < itens.size(); i++){
                    cout << i << ". "<< itens[i].nome << " | " << itens[i].quantidade << " | " << itens[i].peso << "Kg" << endl;
                }

                break;
            }
        }
        // Remove automaticamente do inventário caso o item fique zerado
        size_t i = 0;
        while(i < itens.size()){
            if (itens[i].quantidade == 0){
                itens.erase(itens.begin() + i);
            } else {
                i++;
            }
        }

    } while (choice != 0);
    // Mensagem final
    cout << "\n=== Programa Encerrado ===" << endl;

    return 0;
}