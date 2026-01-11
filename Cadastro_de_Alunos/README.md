# 📌 Projeto Cadastro em C++

Este é um programa simples em **C++** que cadastra 5 Alunos e mostra o resultado final (Nome, Notas, Média e Situação).

---

## 📂 Estrutura do Projeto

Cadastro_de_Alunos/
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
