#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <map>

#include "locale.h"
#include "funcoes.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");
    map<string, vector<float>> dados; // Dicionário para armazenar os alunos e suas notas

    string aluno;
    float notas;

    cout << "=== Cadastro de Alunos ===" << endl;
    // Ler Nome do aluno e adicionar no dicionário
    for (int a = 0; a < 5; a++){
        aluno = LerString("\nDigite o nome do " + to_string(a+1) + "* Aluno: ");
        dados[aluno] = vector<float>();
        // Lendo notas e adicionando pro aluno
        for (int n = 0; n < 2; n++){
            notas = LerNum("Digite a " + to_string(n+1) + "* Nota de " + aluno + ": ");
            dados[aluno].push_back(notas);
        }
    }
    // Mostrando resultados
    cout << "\n=== Resultado ===" << endl;
    for (const auto& aluno : dados){
        const string& nome = aluno.first;
        const vector<float>& notas = aluno.second;
        // Somando as notas de cada aluno
        float soma = 0;
        for (float n : notas){
            soma += n;
        }
        // Media de cada aluno
        float media = soma / aluno.second.size();
        string situacao = media >= 60 ? "Aprovado" : "Reprovado";
        
        cout << "\nAluno: " + nome << endl;
        cout << "Notas: ";
        for (float n : notas){
            cout << n << " | "; 
        }
        cout << "\nMédia: " << fixed << setprecision(1) << media << endl;
        cout << "Situação: " + situacao << endl;
    }
}