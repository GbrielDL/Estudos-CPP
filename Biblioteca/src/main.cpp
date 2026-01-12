#include <iostream>
#include <string>
#include <vector>

#include "locale.h"
#include "funcoes.h"

using namespace std;

// Modelo do Livro
struct Livro
{
    string titulo;
    string autor;
    bool emprestado;
};

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");
    // Lista para guardar os livros
    vector<Livro> biblioteca;
    Livro novo;
    int opcao;
    // MENU
    do {
        opcao = LerInteiro("\n   === Biblioteca ===\n[1] - Cadastrar Livro\n[2] - Listar Livros\n[3] - Pegar Emprestado\n[0] - Sair\nOpção: ");
        
        switch (opcao)
        {
            case 1:
                // Cadastrar o Livro
                novo.titulo = LerString("\nTítulo: ");
                novo.autor = LerString("Autor: ");
                novo.emprestado = false;

                biblioteca.push_back(novo);
                cout << "- Livro cadastrado com sucesso!" << endl;
                break;
            case 2:
                // Listar Livros
                if (biblioteca.empty()){
                    cout << "- Lista vazia." << endl;
                }
                else {
                    for (int l = 0; l < biblioteca.size(); l++){
                        cout << "\nID: " << l << endl;
                        cout << "Título: " << biblioteca[l].titulo << endl;
                        cout << "Autor: " << biblioteca[l].autor << endl;
                        cout << "Status: " << (biblioteca[l].emprestado ? "Emprestado" : "Disponível") << endl;
                    }
                }
                break;
            case 3:
                // Pegar Emprestado
                int ID = LerInteiro("\nDigite o ID do livro: ");
                
                if (ID >= 0 && ID < biblioteca.size()){
                    if (!biblioteca[ID].emprestado){
                        biblioteca[ID].emprestado = true;
                        cout << "- Livro emprestado com sucesso!" << endl;
                    } else {
                        cout << "- Este Livro ja está emprestado!" << endl;
                    }
                } else {
                    cout << "- ID inválido." << endl;
                }
        } 
        
    } while (opcao != 0);
    cout << "\nPrograma encerrado." << endl;

    return 0;
}