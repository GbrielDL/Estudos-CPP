# 📦 Sistema de Inventário em C++

Este projeto é um **sistema de inventário em C++**, desenvolvido com o objetivo de praticar conceitos fundamentais e intermediários da linguagem, como estruturas (`struct`), vetores (`std::vector`), funções, validação de entrada e controle de fluxo com menus.

O programa roda totalmente no terminal e permite gerenciar itens de forma simples e organizada.

---

## 🚀 Funcionalidades

- ✅ Adicionar itens ao inventário  
- ✅ Usar itens (por ID ou por nome)  
- ✅ Remover itens (quantidade específica ou item completo)  
- ✅ Listar todos os itens do inventário  
- ✅ Remoção automática de itens com quantidade igual a zero  
- ✅ Validação de entradas (evita campos vazios e valores inválidos)  
- ✅ Suporte a números decimais com vírgula ou ponto (`3,5` ou `3.5`)  

---

## 🧱 Estrutura do Projeto

📁 Inventario-Cpp
│
├── main.cpp // Menu principal e lógica do inventário
├── funcoes.cpp // Funções auxiliares de leitura e validação
├── funcoes.h // Declarações das funções

---

## 🧠 Conceitos Utilizados

- `struct` para representar itens do inventário  
- `std::vector` para armazenamento dinâmico  
- Funções reutilizáveis para entrada de dados  
- Validação manual de strings e números  
- Controle de fluxo com `do-while`, `while` e `switch`  
- Uso de `setlocale` para compatibilidade com números decimais  

```cpp
setlocale(LC_ALL, "portuguese_Brazil");
setlocale(LC_NUMERIC, "C");
```

## 🛠️ Compilação e execução

### Usando g++:

```bash
g++ src/*.cpp -o output/main.exe
output/main.exe
```

---

## 📌 Exemplo de Uso

=== Inventário ===
[1] Adicionar Item
[2] Usar Item
[3] Remover Item
[4] Olhar Inventário
[0] Sair
Escolha:


## 🎯 Objetivo do Projeto

Este projeto foi criado para fins de estudo, com foco em lógica de programação e organização de código em C++.
Ele simula um pequeno sistema de inventário como os encontrados em jogos ou aplicações simples.

👨‍💻 Autor: Gabriel de Lima Gonçalves