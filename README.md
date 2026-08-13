# C++ Intermediário

Repositório com os códigos e exercícios desenvolvidos durante o curso [**Curso de C++ - Intermediário**](https://www.udemy.com/course/cplusplus-intermediario/) (Udemy), do instrutor Marcos Castro.

## 📖 Sobre

Este repositório reúne o material prático produzido ao longo do curso, organizado por tópicos, com o objetivo de servir tanto como registro de aprendizado quanto como referência futura.

O curso aborda recursos mais avançados de C++, partindo de conceitos como ponteiros e structs até estruturas de dados, grafos, programação dinâmica e algoritmos de machine learning implementados do zero.

## 🚀 Como compilar e executar

Cada pasta contém arquivos `.cpp` independentes. Exemplo de compilação usando `g++`:

```bash
g++ -std=c++17 -Wall -o programa arquivo.cpp
./programa
```

Se algum exercício usar múltiplos arquivos, o comando de compilação estará descrito no comentário no topo do arquivo ou em um `README.md` local da pasta.

## 🛠️ Tecnologias

- **Linguagem:** C++ (padrão C++17)
- **Compilador:** g++

## 📌 Tópicos abordados

- Ponteiros e referências, structs (inclusive aninhadas)
- Classes: construtores/destrutores, construtor de cópias, modificadores de acesso, funções `friend`
- Herança, funções virtuais e polimorfismo
- Templates e tipos de dados abstratos parametrizados (TADs: pilha, fila)
- Sobrecarga de operadores e de funções
- STL: `vector`, `list`, `deque`, `map`, `set`, `queue`, `priority_queue`, `stack`
- Tratamento de exceções e manipulação de arquivos (I/O)
- Grafos: matriz/lista de adjacência, DFS, BFS, detecção de ciclo, Dijkstra, Kruskal (union-find), Kosaraju
- Programação dinâmica (mochila 0-1, LCS, LPS, Kadane)
- Backtracking (permutações, combinações, subconjuntos, N-Rainhas)
- Algoritmos gulosos (problema do troco, entre outros)
- Introdução a Machine Learning: KNN, K-Means (clustering) e Algoritmos Genéticos

## 📝 Convenção de commits

Os commits deste repositório seguem o padrão **[Conventional Commits](https://www.conventionalcommits.org/pt-br/v1.0.0/)**, no formato:

```
<tipo>[escopo opcional]: <descrição>
```

Principais tipos utilizados:

| Tipo       | Uso                                                              |
|------------|-------------------------------------------------------------------|
| `feat`     | Novo exercício/código implementado                               |
| `fix`      | Correção de bug em algum código já existente                     |
| `docs`     | Alterações na documentação (README, comentários explicativos)    |
| `refactor` | Refatoração de código sem mudança de comportamento               |
| `style`    | Formatação, indentação, sem alteração de lógica                  |
| `chore`    | Tarefas de manutenção (ex.: organização de pastas, `.gitignore`) |

> A descrição deve sempre começar com um verbo no **infinitivo** (ex.: implementar, corrigir, atualizar), e não conjugado.

Exemplos:

```
feat(grafos): implementar busca em profundidade (DFS)
fix(templates): corrigir erro de compilação no TAD Pilha
docs: atualizar README com estrutura do repositório
```
## 👤 Autor

Desenvolvido durante o curso [Curso de C++ - Intermediário](https://www.udemy.com/course/cplusplus-intermediario/) (Marcos Castro, Udemy), como prática pessoal.
