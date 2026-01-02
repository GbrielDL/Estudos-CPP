# 📌 Projeto Tabuada em C++

Este projeto é um programa simples em **C++** que gera a **tabuada de um número**, com validação de entrada e repetição usando `do while`.

O objetivo do projeto é **treinar lógica de programação, organização em múltiplos arquivos e boas práticas em C++**.

---

## 📂 Estrutura do Projeto

Tabuada/
├── src/
│ ├── main.cpp
│ ├── funcoes.cpp
│ └── funcoes.h
│
├── output/
│ └── main.exe
│
└── README.md

---

## 📁 Pastas e Arquivos

### 🔹 `src/`
Contém todo o **código-fonte** do projeto.

- `main.cpp`  
  Arquivo principal do programa.  
  Responsável pela execução, interação com o usuário e chamada das funções.

- `funcoes.cpp`  
  Implementação das funções auxiliares, como:
  - leitura de números
  - leitura de strings
  - geração da tabuada

- `funcoes.h`  
  Header com as **declarações das funções** utilizadas no projeto.

---

### 🔹 `output/`
Contém o **arquivo executável** gerado após a compilação.

- `main.exe`  
  Executável do programa (Windows).

---

## ⚙️ Compilação
Para compilar o projeto, utilize:

```bash
g++ src/*.cpp -o output/main.exe
