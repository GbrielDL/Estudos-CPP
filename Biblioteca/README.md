# 📚 Sistema de Biblioteca em C++

Este é um **pequeno sistema de biblioteca desenvolvido em C++**, com o objetivo de praticar conceitos fundamentais da linguagem, como **structs**, **vetores**, **menus interativos** e **entrada de dados segura**.

O programa permite cadastrar livros, listar os livros cadastrados e realizar o empréstimo de livros pelo ID.

---

## 🚀 Funcionalidades

- 📌 **Cadastrar livros**
  - Título
  - Autor
  - Status inicial como disponível

- 📋 **Listar livros**
  - Exibe ID
  - Título
  - Autor
  - Status (Disponível ou Emprestado)

- 🔄 **Emprestar livros**
  - Seleção pelo ID
  - Validação de ID
  - Impede empréstimo de livros já emprestados

- ❌ **Encerrar o programa**

---

## 🧠 Conceitos Utilizados

- `struct` para modelar livros
- `vector` para armazenar a biblioteca
- Menu interativo com `do while` e `switch`
- Validação de entrada
- Organização do código em arquivos `.h`
- Uso de `setlocale` para suporte ao português

---

## 🏗️ Estrutura do Livro

Cada livro é representado pela seguinte estrutura:

```cpp
struct Livro {
    string titulo;
    string autor;
    bool emprestado;
};
