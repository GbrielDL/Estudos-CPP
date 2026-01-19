# 🔤 Compactador de String em C++

Este projeto é um **compactador de strings** desenvolvido em **C++**, que transforma sequências de caracteres repetidos em um formato reduzido, **preservando os espaços em branco na saída**.

O objetivo principal é praticar **lógica, manipulação de strings, validação de entrada e controle de fluxo** em C++.

---

## ✨ Funcionalidades

* Compacta letras consecutivas

  * Exemplo:

    ```
    aabbdd → a2b2d2
    ```
* Mantém os espaços na string convertida

  * Exemplo:

    ```
    aabbdd cdaa → a2b2d2 c1d1a2
    ```
* Validação de entrada:

  * Não aceita string vazia
  * Não aceita string composta apenas por espaços
  * Não aceita números no texto
* Menu interativo para repetir a operação
* Código organizado com funções reutilizáveis

---

## 🧠 Como funciona o algoritmo

1. O programa percorre a string caractere por caractere
2. Se encontrar um **espaço**, ele apenas copia o espaço para a string convertida
3. Se encontrar uma letra:

   * Conta quantas vezes ela se repete **consecutivamente**
   * Adiciona a letra seguida da quantidade
4. O processo continua até o final da string

---

## 🧪 Exemplo de uso

### Entrada

```
Digite um Texto: aabbdd cdaa
```

### Saída

```
Frase Digitada: aabbdd cdaa
Convertida: a2b2d2 c1d1a2
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

* `LerString()`

  * Lê e valida a entrada do usuário
  * Verifica se a string não está vazia nem contém apenas espaços
  * Bloqueia números na entrada

* `LerInteiro()`

  * Lê e valida números inteiros
  * Utilizada no menu de repetição

* `main()`

  * Controla o fluxo do programa
  * Executa o algoritmo de compactação

---

## 🎯 Objetivo do Projeto

Projeto desenvolvido com fins **educacionais**, para treinar:

* Manipulação de strings
* Laços de repetição (`for` e `while`)
* Validação de dados
* Lógica de compressão simples
* Organização de código em C++

---

## 👤 Autor

**Gabriel de Lima Gonçalves**

---

## 📄 Licença

Este projeto é livre para uso educacional e aprendizado.