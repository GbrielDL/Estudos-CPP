#include <iostream> // Recursos básicdos de saída e entrada
#include <map> // Criar dicionário
#include <vector> // Criar Arrays
#include <string> // Usar Strings
#include <iomanip> // Formatação de Saída
#include <limits> // Mostra informação sobre os limites dos tipos de dados
#include <cctype> // Fornece funções para testar e manipular caracteres
#include <locale.h> // Serve para configurar e controlar a localidade (locale) do programa
 
using namespace std; // Usar a biblioteca std, sem precisar std::cout por exemplo 

// Função para ler números inteiros
int LerInteiro (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        // Verificar se o campo está vazio
        if (entrada.empty()){
            cout << "Error! Campo vazio\n";
            continue;
        }

        bool apenasNum = true;

        for (char c : entrada){
            if (!isdigit(c)){
                apenasNum = false;
                break;
            }
        }
        if (!apenasNum){
            cout << "Error! Digite apenas números.\n";
            continue;
        }

        // Converte string para int
        return stoi(entrada);
    }
}
// Função para ler números float
float LerFloat (const string& msg){
    string entrada;
    
    while (true){
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty()){ // Verifica o campo vazio
            cout << "Error! Campo vazio\n";
            continue;
        }

        bool apenasFloat = true;

        for (char c : entrada){
            if (!isdigit(c)){
                apenasFloat = false;
                break;
            }
        }
        if (!apenasFloat){
            cout << "Error! Digite um número float.\n";
            continue;
        }

        // Converte para Float
        return stof(entrada);
    }
}
// Função para ler string
string LerString (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty()){ // Verifica se o campo está vazio
            cout << "Error! Campo vazio.\n";
            continue;
        }
        
        bool apenasLetras = true;
        for (char c : entrada){ // Ler a entrada
            if (!isalpha(c) && c != ' '){ // Verifica se tem apenas caracteres
                apenasLetras = false;
                break;
            }
        }

        if (apenasLetras) {
            return entrada;
        }
        cout << "Error! Digite novamente\n";
    }
}

// === Programa principal ===
int main(){
    setlocale(LC_ALL, "portuguese_Brazil"); // Define configuração regional
    map<string, vector<float>> dados; // Criei um "dicionário" para armazenar nome e notas dos alunos

    // Perguntar quantos Alunos e Notas vão ser cadastrados
    int quant_alunos = LerInteiro("Quantos Alunos vão ser cadastrados? ");
    int quant_notas = LerInteiro("Quantas Notas vão ser cadastradas? ");

    // Ler nome e notas dos alunos
    for (int a = 0; a < quant_alunos; a++){
        string aluno = LerString("Nome do " + to_string(a+1) + "* Aluno: ");
        dados[aluno] = vector<float>(); // Cria uma lista de notas para o aluno

        for (int n = 0; n < quant_notas; n++){
            float nota = LerFloat("Digite a " + to_string(n+1) + "* de " + aluno + ": ");
            dados[aluno].push_back(nota);
        }
    }
    // Mostra o resultado final
    cout << "\n---Resultado Final---\n";
    cout << "Aluno     Média     Situação\n";

    for (auto& aluno : dados){
        float soma = 0;

        for (float nota : aluno.second){ // Verifica a lista de notas de um aluno por vez
            soma += nota;
        }

        float media = aluno.second.empty() ? 0 : soma / aluno.second.size(); // Se as notas do aluno estiver vazio, retorna zero
        string resultado;
        
        if (media < 50){
            resultado = "Reprovado";
        }
        else if (media < 60){
            resultado = "Recuperação";
        }
        else{
            resultado = "Aprovado";
        }

        cout << aluno.first << " | " << fixed << setprecision(1) << media << " | " << resultado << endl; 
    }

    return 0;
}