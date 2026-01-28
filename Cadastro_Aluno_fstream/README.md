# 📄 Cadastro de Alunos com Arquivo (C++)

## 📌 Descrição
Este projeto é um exercício rápido em C++ que demonstra como cadastrar alunos, validar entradas do usuário e salvar/ler dados de um arquivo utilizando a biblioteca `<fstream>`.

O programa cadastra 3 alunos, cada um com duas notas, salva essas informações em um arquivo de texto e, ao final, exibe os dados cadastrados na tela.

---

## 🧠 Funcionalidades
- Cadastro de nome do aluno com validação:
  - Não aceita campo vazio
  - Não aceita números no nome
- Cadastro de notas com validação:
  - Aceita números decimais
  - Aceita `.` ou `,` como separador
- Grava os dados no arquivo `alunos.txt`
- Lê e exibe o conteúdo do arquivo
- Uso de `ofstream` e `ifstream`

---

## 📂 Formato do arquivo gerado

Nome do Aluno: Nota1 | Nota2
Exemplo:

Gabriel: 8.5 | 9
Maria: 7 | 6.5
João: 9 | 8

---

## 🛠️ Tecnologias utilizadas
- C++
- Biblioteca `<fstream>`
- Biblioteca `<string>`
- Validação manual de entrada
- `setlocale` para suporte a idioma e números

---

## ▶️ Como executar usando g++:

```bash
g++ src/main.cpp -o output/main.exe
output/main.exe
```

Preencha os dados solicitados no terminal

---

## 🎯 Objetivo do exercício
Praticar:
- Manipulação de arquivos em C++
- Validação de entrada do usuário
- Uso de `getline`
- Estruturação de um programa simples e funcional

👨‍💻 Autor: Gabriel de Lima Gonçalves
