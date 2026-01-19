#include <iostream>
#include <string>
#include <cctype>

#include "locale.h"

using namespace std;
// Ler um campo vazio
bool CampoVazio (const string& msg){
    bool soEspaco = true;
    string entrada = msg;

    for (char& c : entrada){
        if (!isspace(c)){
            soEspaco = false;
            break;
        }
    }

    if (entrada.empty() || soEspaco){
        return false;
    }

    return true;
}
// Ler String
string LerString (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        if (!CampoVazio(entrada)){
            cout << "- Campo vazio" << endl;
            continue;
        }

        bool apenasLetras = true;
        bool semPont = false;
        for (char& l : entrada){
            if (!ispunct(l)){
                continue;
            } else{
                semPont = true;
            }

            if (isdigit(l)){
                apenasLetras = false;
                break;
            }
        }

        if (!apenasLetras){
            cout << "- Error! Digite apenas Letras (A - Z)" << endl;
            continue;
        } else if (semPont){
            cout << "- Error! Não coloque pontuações" << endl;
            continue;
        }

        return entrada;
    }
}
// Ler Número inteiro
int LerNum (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        if (!CampoVazio(entrada)){
            cout << "- Campo vazio" << endl;
            continue;
        }

        bool apenasNum = true;
        for (char& c : entrada){
            if (!isdigit(c)){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum){
            cout << "- Error! Digite apenas Número." << endl;
            continue;
        }

        try
        {
            return stoi(entrada);
        }   
        catch(...)
        {
            cout << "- Valor inválido." << endl;
        }
        
    }
}

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");
    
    int opcao;

    do {
        cout << "\n=== Verificador de Políndromo ===" << endl;
        // Lendo o teclado e armazenando
        string texto = LerString("Digite uma Frase ou uma Palavra (Sem Pontuações): ");
        string avesso;
        // Colocando o texto de trás pra frente
        for (int c = texto.size(); c > 0; c--){
            if (isspace(texto[c-1])){
                continue;
            }
            avesso.push_back(tolower(texto[c-1]));
        }
        bool polindromo = false;
        string lower;
        // Colocando o texto escrito em Minúsculo
        for (char& c : texto){
            if (isspace(c)){
                continue;
            }
            lower.push_back(tolower(c));
        }

        if (lower == avesso){
            polindromo = true;
        }   
        texto = lower;
        // Mostra se é Políndromo ou não
        cout << "\nFrase: " << texto << "\nO contrário: " << avesso << endl;
        cout << (polindromo ? "é POLÍNDROMO" : "Não é POLÍNDROMO") << endl;
        // Pergunta ao Usuário se Deseja continuar ou não
        opcao = LerNum("\nDeseja digitar outra coisa?\n[0] Não\n[1] Sim\nOpção: ");
    } while (opcao != 0);
    // Mensagem final    
    cout << "\n=== Fim do Programa ===" << endl;

    return 0;
}