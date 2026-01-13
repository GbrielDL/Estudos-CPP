# ✅ Gerenciador de Tarefas em C++

Este projeto é um **gerenciador de tarefas em terminal**, desenvolvido em **C++**, com foco no aprendizado de **estruturas de dados**, **validação de entrada**, **organização por prioridade** e **controle de estado das tarefas**.

O sistema permite adicionar, listar, concluir e remover tarefas de forma simples e intuitiva.

---

## 🚀 Funcionalidades

- ➕ **Adicionar tarefas**
  - Descrição
  - Prioridade de 1 a 5
- 📋 **Listar tarefas**
  - Ordenadas por prioridade (maior → menor)
  - Exibição de status (Pendente ou Concluída)
- ✔️ **Marcar tarefa como concluída**
- 🗑️ **Remover tarefa pelo ID**
- ❌ **Encerrar o programa**

---

## 🧠 Conceitos Utilizados

- `struct` para modelar tarefas
- `vector` para armazenar a lista de tarefas
- Ordenação manual por prioridade
- Validação de entradas do usuário
- Menu interativo com `do while` e `switch case`
- Uso de `setlocale` para suporte ao português
- Manipulação de dados em tempo de execução

---

## 🏗️ Estrutura da Tarefa

Cada tarefa é representada pela seguinte estrutura:

```cpp
struct Tarefa {
    string descricao;
    int prioridade;
    bool concluida;
};
