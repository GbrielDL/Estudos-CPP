#include <string>

// Declarações
enum class SaboresPizza{Calabresa, Frango, Bacon, Toscana, Nordestina, Carne, FINAL};
enum class Bebidas{CocaCola, FantaUva, FantaLaranja, Guarana, Sprite, FINAL};

int LerInteiro(const std::string& mensagem);

std::string MostrarSabor (SaboresPizza sabor);
std::string MostrarBebida (Bebidas bebida);

char LerCaractere (const std::string& mensagem);

double PrecoPizza (SaboresPizza sabor, char tamanho);
double PrecoBebida (Bebidas bebida);

