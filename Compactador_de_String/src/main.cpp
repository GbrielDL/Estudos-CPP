#include <iostream>
#include <string>
#include <cctype>

#include "locale.h"

using namespace std;
// Função para ler String
string LerString (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);
        // Verifica se a String inteira só tem espaços
        bool soEspaco = true;
        for (char& c : entrada){
            if (!isspace(c)){ // Se a String inteira tiver só espaço, o "soEspaco" continua true
                soEspaco = false;
                break;
            }   
        }

        if (entrada.empty() || soEspaco){
            cout << "- Error! Campo vazio." << endl;
            continue;
        }

        bool apenasLetras = true;
        for (char& c : entrada){
            if (isdigit(c)){
                apenasLetras = false;
                break;
            }
        }

        if (!apenasLetras){
            cout << "- Error! Digite apenas Letras (A - Z)" << endl;
            continue;
        }

        return entrada;
    }
}
// Função para ler número inteiro
int LerInteiro (const string& msg){
    string entrada;

    while (true){
        cout << msg;
        getline(cin, entrada);

        if (entrada.empty() || entrada == " "){
            cout << "- Error! Campo vazio." << endl;
            continue;
        }

        bool apenasNum = true;
        for (char& c : entrada){
            if (!isdigit(c)){
                apenasNum = false;
            }
        }

        if (!apenasNum) {
            cout << "- Error! Digite apenas Números." << endl;
            continue;
        }

        try
        {
            return stoi(entrada);
        }
        catch(...)
        {
            cout << "- Valor inválido" << endl;
        }
        
    }
}

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");
    
    int resp;
    do{
        cout << "\n=== Compactador de String ===" << endl;
        // Armazenar a String
        string frase = LerString("Digite um Texto: ");
        string convertida;
        //Passar por toda a String
        for (int l = 0; l < frase.size(); l++){
            if (isspace(frase[l])){
                convertida.push_back(' ');
                continue;
            }

            char atual = frase[l];
            int cont = 1;
            
            while (l+1 < frase.size() && atual == frase[l + 1]){
                cont++;
                l++;
            }
            // Armazenar String formatada
            convertida.push_back(atual);
            convertida += to_string(cont);
        }
        // Mostrar Resultado
        cout << "\nFrase Digitada: " << frase << "\nConvertida: " << convertida << endl;
        resp = LerInteiro("\nDeseja escrever outra frase?\n[1] Sim\n[0] Não\nOpção: ");
    } while (resp != 0);
    // Mensagem final
    cout << "\n=== Fim do Programa ===" << endl;

    return 0;
}