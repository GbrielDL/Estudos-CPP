#include <iostream>
#include <string>
#include <vector>

#include "locale.h"
#include "funcoes.h"

using namespace std;

struct Tarefa
{
    string descricao;
    int prioridade;
    bool concluida;
};


int main() {
    setlocale(LC_ALL, "portuguese_Brazil");

    vector<Tarefa> lista;
    Tarefa nova;
    int opcao;
    // MENU
    do {
        opcao = LerNumero("\n   === Gerenciador de Tarefas ===\n[1] - Adicionar Tarefa\n[2] - Listar Tarefas\n[3] - Marcar como Concluída\n[4] - Remover Tarefa\n[0] - Sair\nOpção: ");

        switch (opcao){
            // Adicionar tarefa
            case 1:
                nova.descricao = LerString("\nEscreva a Tarefa: ");
                while (true){
                    nova.prioridade = LerNumero("Prioridade (1 a 5): ");

                    if (nova.prioridade < 1 || nova.prioridade > 5){
                        cout << "- Error! Valor de Prioridade inválida." << endl;
                        continue;
                    } else{
                        nova.concluida = false;
                        lista.push_back(nova);
                    }
                    break;
                }
                cout << "- Nova Tarefa adicionada com sucesso." << endl;
                break;
            // Listar tarefas
            case 2:
                if (lista.empty()){
                    cout << "- Lista Vazia" << endl;
                } else {
                    // Colocando em primeiro a tarefa com maior prioridade
                    for (int i = 0; i < lista.size(); i++){
                        for (int j = i+1; j < lista.size(); j++){
                            if (lista[i].prioridade < lista[j].prioridade){
                                auto temp = lista[i];
                                lista[i] = lista[j];
                                lista[j] = temp;
                            }
                        }
                    }
                    // Mostrar em Ordem com Prioridade Maior
                    for (int t = 0; t < lista.size(); t++){
                        cout << "\nID: " << t << endl;
                        cout << "Tarefa: " << lista[t].descricao << endl;
                        cout << "Prioridade: " << lista[t].prioridade << endl;
                        cout << (lista[t].concluida ? "Concluída" : "Pendente") << endl;
                    }
                }
                break;
            // Marcar como concluída
            case 3:
                if (lista.empty()){
                    cout << "- Não existe Tarefa para Concluir." << endl;
                    break;
                }
                while (true){
                    int ID = LerNumero("\nDigite o ID da tarefa que deseja Marcar como Concluída: ");

                    if (ID < 0 || ID >= lista.size()){
                        cout << "- Error! ID inválido." << endl;
                        continue;
                    } else {
                        if (lista[ID].concluida){
                            cout << "- Esta Tarefa ja foi concluída." << endl;
                        } else {
                            lista[ID].concluida = true;
                            cout << "- Tarefa Marcada como Concluída." << endl;
                        }
                    }
                    break;
                }
                break;
            // Remover tarefa
            case 4:
                if (lista.empty()) {
                    cout << "- Não existe Tarefa para Remover." << endl;
                    break;
                }
                while (true){
                    int ID = LerNumero("\nDigite o ID da Tarefa para removê-la: ");
                    if (ID < 0 || ID >= lista.size()){
                        cout << "- Error! ID inválido." << endl;
                        continue;
                    } else {
                        lista.erase(lista.begin() + ID);
                        cout << "- Tarefa removida com sucesso." << endl;
                    }
                    break;
                }
                break;
            default:
                break;
        }
    } while (opcao != 0); // Sair

    cout << "\n=== Programa Encerrado ===" << endl;

    return 0;
}