# 🔐 Analisador de Senha em C++

Este projeto é um **exercício prático em C++** que implementa um **validador de senha**, aplicando regras comuns utilizadas em sistemas reais de autenticação.

O objetivo é treinar **lógica de programação**, **loops**, **strings**, **validação de dados** e uso de funções da biblioteca padrão do C++.

---

## 📋 Regras da Senha

A senha digitada pelo usuário só é aceita se atender **todas** as condições abaixo:

* Ter **no mínimo 8 caracteres**
* Conter **pelo menos uma letra maiúscula**
* Conter **pelo menos uma letra minúscula**
* Conter **pelo menos um número**
* Conter **pelo menos um símbolo** (caractere especial)

Caso alguma regra não seja atendida, o programa informa **exatamente qual requisito falhou**.

---

## 🛠️ Tecnologias Utilizadas

* **C++**
* Biblioteca padrão:

  * `<iostream>`
  * `<string>`
  * `<cctype>` (para validações como `isdigit`, `isupper`, `islower`, `ispunct`)

---

## ▶️ Como Funciona

1. O programa solicita que o usuário digite uma senha
2. A senha é analisada caractere por caractere
3. Flags booleanas verificam se cada critério foi atendido
4. Se algum critério falhar, uma mensagem de erro é exibida
5. O processo se repete até que uma senha válida seja informada

---

## 💻 Exemplo de Saída

```text
=== Senha deve ter letras maiúsculas, minúsculas, números, símbolos e no mínimo 8 caractere ===
Cadastre uma Senha: abc123
Error! A senha deve ter no mínimo 8 caractere.

Cadastre uma Senha: Abc12345
Error! A senha tem que ter ao menos UM Caractere Especial

Cadastre uma Senha: Abc@12345
Senha válida. Bem vindo!
```

---

## 🎯 Objetivo do Exercício

Este exercício foi desenvolvido com fins **educacionais**, focando em:

* Validação de entrada do usuário
* Uso correto de loops (`while`, `for`)
* Controle de fluxo com `continue` e `break`
* Boas práticas de organização de código

---

📌 *Projeto simples, porém baseado em regras reais usadas em sistemas profissionais.*
