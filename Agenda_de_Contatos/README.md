# 📒 Agenda de Contatos em C++

Este projeto é uma **Agenda de Contatos desenvolvida em C++**, utilizando conceitos fundamentais da linguagem como `struct`, `vector`, validação de entrada, funções auxiliares e formatação de saída.

O programa funciona totalmente via **terminal** e permite cadastrar, visualizar, pesquisar e remover contatos de forma simples e organizada.

---

## 🚀 Funcionalidades

* ✅ **Cadastrar contatos** (Nome e Telefone)
* 📋 **Listar todos os contatos** com ID automático
* 🔍 **Pesquisar contatos** por:

  * Nome (ignorando maiúsculas/minúsculas)
  * ID
  * Telefone
* ❌ **Remover contatos** pelo ID
* ☎️ **Formatação automática de telefone**

  * `(00) 00000-0000`
  * `(00) 0000-0000`
* 🛡️ **Validação de dados** (campo vazio, caracteres inválidos, números incorretos)

---

## 🧱 Estrutura do Projeto

```
📁 Agenda-Contatos-Cpp
├── main.cpp        // Programa principal e menu
├── funcoes.cpp     // Funções auxiliares e validações
└── funcoes.h       // Protótipos das funções
```

---

## 🧠 Conceitos Utilizados

* `struct` para modelar contatos
* `vector` para armazenamento dinâmico
* Laços `for` e `do while`
* `switch-case` para menus
* Validação manual de strings
* `tolower()` para busca case-insensitive
* `substr()` para formatação de telefone
* `setw` e `iomanip` para alinhamento de saída
* Tratamento de exceções com `try / catch`

---

## 📌 Exemplo de Uso

```
=== Agenda de Contatos ===
[1] Cadastrar Contato
[2] Visualizar Contatos
[3] Remover Contato
[4] Pesquisar Contato
[0] Sair
Opção: 1

Nome do Contato: Gabriel
Telefone: 11987654321
- Contato Cadastrado com sucesso!
```

---

## ⚙️ Compilação e Execução

Utilizando o **g++**:

```bash
g++ main.cpp funcoes.cpp -o agenda
./agenda
```

---

## 📚 Objetivo do Projeto

Este exercício tem como objetivo **praticar lógica de programação em C++**, organização de código, validação de entradas e manipulação de dados em memória.

É ideal para estudantes iniciantes/intermediários que desejam consolidar conceitos essenciais da linguagem.

---

## 👨‍💻 Autor

Projeto desenvolvido para fins de estudo e prática em **C++**.

---

⭐ Se gostou do projeto, fique à vontade para clonar, estudar e evoluir o código!
