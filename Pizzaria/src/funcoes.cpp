#include <iostream>
#include <string>

// Enum
enum class SaboresPizza{Calabresa, Frango, Bacon, Toscana, Nordestina, Carne, FINAL};

enum class Bebidas{CocaCola, FantaUva, FantaLaranja, Guarana, Sprite, FINAL};
// Mostrar nomes dos Sabores
std::string MostrarSabor (SaboresPizza sabor){
    switch (sabor){
        case SaboresPizza::Calabresa: return "Calabresa";
        case SaboresPizza::Frango: return "Frango";
        case SaboresPizza::Bacon: return "Bacon";
        case SaboresPizza::Toscana: return "Toscana";
        case SaboresPizza::Nordestina: return "Nordestina";
        case SaboresPizza::Carne: return "Carne";
        default: return "Desconhecido";
    }
}
// Mostrar nomes das Bebidas
std::string MostrarBebida (Bebidas bebida){
    switch (bebida){
        case Bebidas::CocaCola: return "Coca Cola";
        case Bebidas::FantaLaranja: return "Fanta Laranja";
        case Bebidas::FantaUva: return "Fanta Uva";
        case Bebidas::Guarana: return "Guaraná";
        case Bebidas::Sprite: return "Sprite";
        default: return "Desconhecido";
    }
}

// Ler Número inteiro
int LerInteiro(const std::string& mensagem){
    std::string valor;

    while (true){
        std::cout << mensagem;
        getline(std::cin, valor);

        if (valor.empty() || valor == " "){
            std::cout << "Error! Campo vazio\n";
            continue;
        }

        bool apenasNum = true;
        for (char c : valor){
            if (!isdigit(c) && c != ' '){
                apenasNum = false;
                break;
            }
        }

        if (!apenasNum){
            std::cout << "Error! Digite apenas números.\n";
            continue;
        }

        return stoi(valor);
    }
}

// Ler apenas 1 Letra
char LerCaractere (const std::string& mensagem){
    std::string entrada;

    while (true){
        std::cout << mensagem;
        getline(std::cin, entrada);

        if (entrada.empty() || entrada == " "){
            std::cout << "Error! Campo vazio.\n";
            continue;
        }

        bool apenasCaractere = true;
        for (char c : entrada){
            if (!isalpha(c) && c != ' '){
                apenasCaractere = false;
                break;
            }
        }

        if (entrada.length() != 1){
            std::cout << "Error! Digite apenas UMA letra.\n";
            continue;
        }

        return entrada[0];
    }
}

// Calcular Preço da Pizza
double PrecoPizza (SaboresPizza sabor, char tamanho){
    switch (sabor){
        case SaboresPizza::Bacon:
            switch (tamanho){
                case 'P': return 23.5;
                case 'M': return 28;
                case 'G': return 37.7;
            }
            break;
        case SaboresPizza::Calabresa:
            switch (tamanho){
                case 'P': return 21;
                case 'M': return 29;
                case 'G': return 38;
            }
            break;
        case SaboresPizza::Carne:
            switch (tamanho){
                case 'P': return 22;
                case 'M': return 31;
                case 'G': return 41;
            }
            break;
        case SaboresPizza::Frango:
            switch (tamanho){
                case 'P': return 22;
                case 'M': return 29;
                case 'G': return 38;
            }
            break;
        case SaboresPizza::Nordestina:
            switch (tamanho){
                case 'P': return 25;
                case 'M': return 32;
                case 'G': return 44;
            }
            break;
        case SaboresPizza::Toscana:
            switch (tamanho){
                case 'P': return 22;
                case 'M': return 29;
                case 'G': return 34;
            }
            break;
    }
    return 0.0;
}

// Calcular preço da Bebida
double PrecoBebida (Bebidas bebida){
    switch (bebida){
        case Bebidas::CocaCola: return 7;
        case Bebidas::FantaLaranja: return 5;
        case Bebidas::FantaUva: return 6;
        case Bebidas::Guarana: return 4.5;
        case Bebidas::Sprite: return 3.8;
        default: return 0;
    }
}