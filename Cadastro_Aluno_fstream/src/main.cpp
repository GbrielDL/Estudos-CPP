#include <iostream>
#include <string>
#include <fstream>

#include "locale.h"

using namespace std;
// Ler String
string LerNome (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        bool soEspaco = true;
        for (char& c : entrada){
            if (!isspace(c)){
                soEspaco = false;
                break;
            }
        }

        if (entrada.empty() || soEspaco){
            cout << "- Error! Campo vazio." << endl;
            continue;
        }
        
        bool apenasLetras = true;
        for (char& l : entrada){
            if (isdigit(l)){
                apenasLetras = false;
                break;
            }
        }

        if (!apenasLetras){
            cout << "- Error! Digite apenas letras." << endl;
            continue;
        }

        return entrada;
    }
}
// Ler número float
float LerFloat (const string& msg){
    string entrada;

    while(true){
        cout << msg;
        getline(cin, entrada);

        bool soEspaco = true;
        for (char& c : entrada){
            if (!isspace(c)){
                soEspaco = false;
                break;
            }
        }
        if (entrada.empty() || soEspaco){
            cout << "- Error! Campo vazio." << endl;
            continue;
        }

        bool pontoUsado = false;
        bool valido = true;

        for (char& n : entrada){
            if (n == ',') n = '.';

            if (n == '.'){
                if (pontoUsado){
                    valido = false;
                    break;
                }
                pontoUsado = true;
                continue;
            }
            
            if (!isdigit(n)){
                valido = false;
                break;
            }
        }

        if (!valido){
            cout << "- Valor inválido." << endl;
            continue;
        }

        try
        {
            return stof(entrada);
        }
        catch(...)
        {
            cout << "- Valor inválido." << endl;
        }
        
    }
}

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");
    setlocale(LC_NUMERIC, "C");

    ofstream arquivo; // Para escrever dentro do Arquivo
    ifstream leitura; // Para Ler o arquivo

    string nome;
    float nota1, nota2;

    // Gravar arquivo
    arquivo.open("alunos.txt");
    if (!arquivo.is_open()){
        cout << "- Error ao tentar abrir arquivo." << endl;
        return 1;
    }

    cout << "=== Cadastrar Alunos ===" << endl;
    for (int c = 0; c < 3; c++){
        nome = LerNome("Nome do Aluno: ");
        nota1 = LerFloat("Nota 1: ");
        nota2 = LerFloat("Nota 2: ");

        // Salvando no Arquivo
        arquivo << nome << ": " << nota1 << " | " << nota2 << endl;
        cout << endl; // Apenas para quebrar a linha
    }

    arquivo.close();
    // Ler Arquivo
    leitura.open("alunos.txt");
    if (!leitura.is_open()){
        cout << "- Error ao tentar let Arquivo" << endl;
        return 1;
    }
    cout << "=== Alunos Cadastrados ===" << endl;

    string linha;
    while (getline(leitura, linha)){
        cout << linha << endl;
    }
    leitura.close();

    return 0;
}