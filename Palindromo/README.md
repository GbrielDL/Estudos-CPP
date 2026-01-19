# 🔁 Verificador de Palíndromo em C++

Este projeto é um **verificador de palíndromos** desenvolvido em **C++**, capaz de identificar se uma palavra ou frase é igual quando lida de trás para frente, **ignorando espaços e diferenças entre letras maiúsculas e minúsculas**.

O programa foi criado com foco **educacional**, para praticar lógica, manipulação de strings, validação de entrada e controle de fluxo.

---

## ✨ Funcionalidades

* Verifica se uma palavra ou frase é um **palíndromo**
* Ignora:

  * Espaços em branco
  * Diferença entre letras maiúsculas e minúsculas
* Validação de entrada:

  * Não aceita campo vazio
  * Não aceita apenas espaços
  * Não aceita números
  * Não aceita pontuações
* Menu interativo para repetir a verificação
* Código modularizado com funções reutilizáveis

---

## 🧠 Como funciona o algoritmo

1. O usuário digita uma palavra ou frase
2. O programa:

   * Remove os espaços
   * Converte todas as letras para minúsculas
3. Cria uma nova string com o texto **invertido**
4. Compara o texto original tratado com o texto invertido
5. Exibe se o texto é ou não um palíndromo

---

## 🧪 Exemplos de uso

### Entrada

```
Digite uma Frase ou uma Palavra (Sem Pontuações): Socorram me subi no onibus em Marrocos
```

### Saída

```
Frase: socorrammesubinoonibusemmarrocos
O contrário: socorrammesubinoonibusemmarrocos
é POLÍNDROMO
```

---

## 🛠️ Tecnologias Utilizadas

* **C++**
* Bibliotecas padrão:

  * `<iostream>`
  * `<string>`
  * `<cctype>`
  * `<locale.h>`

---

## 📂 Estrutura do Código

* `CampoVazio()`

  * Verifica se a string está vazia ou contém apenas espaços

* `LerString()`

  * Lê e valida a entrada do usuário
  * Bloqueia números e pontuações

* `LerNum()`

  * Lê e valida números inteiros
  * Utilizada no menu de repetição

* `main()`

  * Controla o fluxo do programa
  * Executa a lógica de verificação do palíndromo

---

## 🎯 Objetivo do Projeto

Projeto desenvolvido para treinar:

* Manipulação de strings
* Laços de repetição (`for`, `while`)
* Funções reutilizáveis
* Validação de dados
* Lógica de comparação e inversão de texto

---

## 👤 Autor

**Gabriel de Lima Gonçalves**

---

## 📄 Licença

Este projeto é livre para uso educacional e aprendizado.
