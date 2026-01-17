#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>

#include "locale.h"
#include "funcoes.h"

using namespace std;
// Struct para contatos
struct Contato
{   
    string nome;
    string telefone;
};
// Programa Principal
int main(){
    setlocale(LC_ALL, "portuguese_Brazil");
    vector<Contato> agenda;
    Contato novo;

    int resp;
    // Menu
    do {
        resp = LerInteiro("\n   === Agenda de Contatos ===\n[1] Cadastrar Contato\n[2] Visualizar Contatos\n[3] Remover Contato\n[4] Pesquisar Contato\n[0] Sair\nOpção: ");

        if (resp < 0 || resp >= 5){
            cout << "- Opção Inválida." << endl;
        }
        switch(resp){
            // Cadastrar Contatos (Nome, Telefone)
            case 1:
                novo.nome = LerString("\nNome do Contato: ");
                novo.telefone = LerTelefone("Telefone: ");
                // Verifica se o Contato ja existe
                for (size_t cont = 0; cont < agenda.size(); cont++){
                    string name = agenda[cont].nome;
                    string telephone = agenda[cont].telefone;

                    if (novo.nome == name && novo.telefone == telephone){
                        cout << "- Este Contato ja foi cadastrado" << endl;
                        break;
                    }
                }
                // Armazenar no vector
                agenda.push_back(novo);
                cout << "- Contato Cadastrado com sucesso!" << endl;
                break;
            // Mostrar a Agenda Organizada
            case 2:
                if (agenda.empty()){
                    cout << "- Agenda vazia." << endl;
                }
                else{
                    cout << "\nID Nome      Telefone" << endl;
                    for (size_t l = 0; l < agenda.size(); l++){
                        string n = agenda[l].nome;
                        string t = agenda[l].telefone;

                        cout << l << "  " << left << setw(10) << n << t << endl;
                    }
                }
                break;
            // Remover Contato
            case 3:
                if (agenda.empty()){
                    cout << "- Agenda vazia." << endl;
                } else {
                    int id = LerInteiro("\nDigite o ID do Contato para remover: ");

                    if (id < 0 || id >= agenda.size()){
                        cout << "- ID inválido." << endl;
                    } else{
                        agenda.erase(agenda.begin() + id);
                        cout << "- Contato removido com sucesso." << endl;
                    }
                }
                break;
            // Pesquisar Contato por Nome ou Telefone
            case 4:
                if (agenda.empty()){
                        cout << "- Agenda vazia." << endl;
                } else{
                    int opcao = LerInteiro("\n[1] Procurar por Nome\n[2] Procurar por ID\n[3] Procurar por Telefone\n[0] Voltar\nOpção: ");

                    switch (opcao){
                        case 1:{
                            string n = LerString("\nDigite o Nome: ");
                            // Deixando o nome inteiro minúsculo
                            for (char& c : n){
                                c = tolower(c);
                            }
                            bool encontrado = false;

                            for (size_t nt = 0; nt < agenda.size(); nt++){
                                string nome = agenda[nt].nome;
                                // Deixar o nome inteiro minúsculo
                                for (char& c : nome){
                                    c = tolower(c);
                                }

                                if (nome.find(n) != string::npos){
                                    cout << left << setw(2) << nt << setw(10) << agenda[nt].nome << agenda[nt].telefone << endl;
                                    encontrado = true;
                                }
                            }
                            if (!encontrado){
                                cout << "- Este contato não foi encontrado." << endl;
                            }

                            break;
                        }
                        case 2:{
                            int id = LerInteiro("\nDigite o ID: ");

                            if (id < 0 || id >= agenda.size()){
                                cout << "- ID inválido." << endl;
                            } else {
                                cout << left << setw(2) << id << setw(10) << agenda[id].nome << agenda[id].telefone << endl;
                            }
                            break;
                        }
                        case 3:{
                            string telefone = LerTelefone("\nDigite o Telefone: ");
                            bool encontrado = false;

                            for (size_t t = 0; t < agenda.size(); t++){
                                if (telefone == agenda[t].telefone){
                                    cout << left << setw(2) << t << setw(10) << agenda[t].nome << agenda[t].telefone << endl;

                                    encontrado = true;
                                }
                            }
                            if (!encontrado){
                                cout << "- Contato não encontrado." << endl;
                            }

                            break;
                        }
                    }
                    break;
                }
                break;
            default:
                cout << "- Opção inválida." << endl;
                break;
        }
    } while (resp != 0);
    cout << "\n=== Programa Encerrado ===" << endl;

    return 0;
}