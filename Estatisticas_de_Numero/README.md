# 📊 Analisador de Números em C++

Este projeto é um exercício em **C++** que lê uma sequência de números inteiros informados pelo usuário e, ao final, exibe algumas estatísticas básicas sobre esses valores.

O programa continua recebendo números até que o usuário digite **0**, que encerra a entrada de dados.

---

## 🚀 Funcionalidades

- Leitura de números inteiros via terminal
- Encerramento da entrada ao digitar `0`
- Cálculo do:
  - Maior número informado
  - Menor número informado
  - Média dos valores
  - Quantidade de números pares
  - Quantidade de números ímpares
- Uso de `vector` para armazenar os valores
- Uso de `numeric_limits` para inicialização segura

---

## 🧠 Conceitos Utilizados

- Estruturas de repetição (`do-while`, `for`)
- Vetores (`std::vector`)
- Validação de entrada
- Conversão de tipos (`static_cast`)
- Biblioteca `<limits>` (`numeric_limits<int>::min()` e `max()`)
- Formatação de saída (`<iomanip>`)

---

## 🖥️ Exemplo de Execução

Digite qualquer valor inteiro [0 para sair]: 1
Digite qualquer valor inteiro [0 para sair]: 2
Digite qualquer valor inteiro [0 para sair]: 3
Digite qualquer valor inteiro [0 para sair]: 4
Digite qualquer valor inteiro [0 para sair]: 5
Digite qualquer valor inteiro [0 para sair]: 0

=== Resultado ===
Maior Número: 5
Menor Número: 1
Média: 3.0
Quantidade Par: 2
Quantidade Ímpar: 3


---

## 📂 Estrutura do Projeto

📁 projeto
├── main.cpp
├── funcoes.h
└── locale.h


> ⚠️ As funções auxiliares como `LerNum` estão definidas nos arquivos de cabeçalho incluídos no projeto.
