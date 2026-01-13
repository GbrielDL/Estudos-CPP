# 🏧 Caixa Eletrônico em C++

Este projeto é um **simulador simples de caixa eletrônico**, desenvolvido em **C++**, com foco no aprendizado de **estrutura de controle**, **funções**, **validação de entrada** e **formatação de valores monetários**.

O sistema permite consultar saldo, realizar depósitos e saques por meio de um menu interativo no terminal.

---

## 🚀 Funcionalidades

- 💰 **Ver saldo**
- ➕ **Depositar dinheiro**
- ➖ **Sacar dinheiro**
  - Validação de saldo disponível
- ❌ **Encerrar o programa**

---

## 🧠 Conceitos Utilizados

- Estruturas de repetição (`do while`)
- Estrutura de decisão (`switch case`)
- Funções auxiliares para entrada e saída
- Validação básica de dados
- Formatação de valores monetários
- Uso de `setlocale` para português

---

## 🛠️ Pré-requisitos

- Compilador **g++**
- C++11 ou superior
- Windows, Linux ou macOS

---

## ▶️ Como Compilar e Executar

### Compilação (exemplo):

```bash
g++ src/main.cpp src/funcoes.cpp -o caixa_eletronico
