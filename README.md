# 📚 Estrutura de Dados — C++

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/Status-Em%20Andamento-yellow?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Aulas-7-blue?style=for-the-badge"/>
</p>

---

## 👨‍💻 Sobre o Repositório

Repositório dedicado aos estudos e exercícios da disciplina de **Estrutura de Dados**, cursada em C++. Aqui estão organizados os conteúdos abordados em aula, com exemplos práticos e implementações dos tópicos estudados.

---

## 👤 Informações

| Campo | Dados |
|---|---|
| 🎓 Aluno | Matheus Souza |
| 👩‍🏫 Professora | Lidiana Martins |
| 📘 Disciplina | Estrutura de Dados |
| 💻 Linguagem | C++ |

---

## 🛠️ Tecnologias Utilizadas

<p>
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/GCC-A42E2B?style=flat-square&logo=gnu&logoColor=white"/>
  <img src="https://img.shields.io/badge/VS%20Code-007ACC?style=flat-square&logo=visual-studio-code&logoColor=white"/>
  <img src="https://img.shields.io/badge/Git-F05032?style=flat-square&logo=git&logoColor=white"/>
  <img src="https://img.shields.io/badge/GitHub-181717?style=flat-square&logo=github&logoColor=white"/>
</p>

---

## 📂 Conteúdo das Aulas

### 🔹 Aulas 01 a 06 — Ponteiros

Estudo aprofundado sobre ponteiros em C++, um dos conceitos fundamentais para o entendimento de estruturas de dados dinâmicas.

Tópicos abordados:

- O que são ponteiros e como funcionam
- Declaração e inicialização de ponteiros
- Aritmética de ponteiros
- Ponteiros e arrays
- Ponteiros para ponteiros (dupla indireção)
- Passagem de ponteiros para funções
- Alocação dinâmica de memória com `new` e `delete`

```cpp
// Exemplo básico de ponteiro
int valor = 10;
int* ptr = &valor;

cout << "Valor: " << valor << endl;
cout << "Endereço: " << ptr << endl;
cout << "Via ponteiro: " << *ptr << endl;
```

---

### 🔹 Aula 07 — Listas Encadeadas

Introdução às listas encadeadas (Linked Lists), estrutura de dados dinâmica que utiliza ponteiros para conectar nós em sequência.

Tópicos abordados:

- Conceito de nó (`Node`)
- Estrutura de uma lista encadeada simples
- Inserção de elementos (início, fim)
- Percorrimento da lista
- Diferenças entre lista encadeada e arrays

```cpp
// Estrutura de um nó
struct Node {
    int dado;
    Node* proximo;
};

// Inserção no início da lista
void inserirInicio(Node*& head, int valor) {
    Node* novo = new Node();
    novo->dado = valor;
    novo->proximo = head;
    head = novo;
}
```

---

## 📈 Progresso

| Aula | Conteúdo | Status |
|------|----------|--------|
| 01 | Introdução a Ponteiros | ✅ Concluído |
| 02 | Aritmética de Ponteiros | ✅ Concluído |
| 03 | Ponteiros e Arrays | ✅ Concluído |
| 04 | Ponteiros para Ponteiros | ✅ Concluído |
| 05 | Ponteiros e Funções | ✅ Concluído |
| 06 | Alocação Dinâmica | ✅ Concluído |
| 07 | Listas Encadeadas | ✅ Concluído |
| 08 | Listas Duplamente encadeadas | ✅ Concluído |

---

## 🚀 Como Executar

```bash
# Clone o repositório
git clone https://github.com/seu-usuario/estrutura-de-dados-cpp.git

# Entre na pasta do projeto
cd estrutura-de-dados-cpp

# Compile um arquivo
g++ -o programa aula01.cpp

# Execute
./programa
```

---

## 📝 Licença

Este repositório é de uso acadêmico pessoal. Sinta-se à vontade para usar como referência de estudo.

---

<p align="center">
  Feito por <strong>Matheus</strong>
</p>
