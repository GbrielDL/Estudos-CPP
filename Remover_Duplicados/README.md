# 🧹 Remover Duplicados em String (C++)

Este é um pequeno programa em **C++** que remove **caracteres duplicados consecutivos** de um texto digitado pelo usuário.

📌 Exemplo:
Entrada:

```
gaabriell
```

Saída:

```
gabriel
```

O programa mantém **a ordem original** dos caracteres e remove apenas repetições **lado a lado**.

---

## 🚀 Funcionalidades

* Lê um texto digitado pelo usuário
* Valida se a entrada não está vazia nem contém apenas espaços
* Remove letras repetidas consecutivamente
* Permite repetir a execução do programa quantas vezes quiser

---

## 🧠 Como funciona a lógica

O programa percorre a string caractere por caractere e:

* Compara o caractere atual com o próximo
* Se forem iguais, ele **ignora**
* Se forem diferentes, ele **adiciona** à string final

Isso garante que apenas duplicações consecutivas sejam removidas.

---

## 🧪 Exemplo de uso

```
=== Remover Duplicados ===
Escreva qualquer coisa: aabbdd cdaa

Texto digitado: aabbdd cdaa
Texto Limpo: abd cda
```

---

## 📂 Estrutura do projeto

```
📁 projeto
 ├── main.cpp
 ├── funcoes.h
 └── funcoes.cpp
```

---

## 🛠️ Compilação e execução

### Usando g++:

```bash
g++ src/*.cpp -o output/main.exe
output/main.exe
```

---

## 📚 Conceitos utilizados

* `std::string`
* Laços `for`
* Comparação de caracteres
* Validação de entrada
* Funções auxiliares
* `push_back()`
* `size_t`

---

## 🎯 Objetivo do projeto

Este projeto foi criado para **praticar manipulação de strings em C++**, validação de entrada e lógica básica de algoritmos.

---