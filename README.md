# Learning C Language

> Repositório com exercícios e códigos desenvolvidos durante o primeiro semestre de Engenharia Elétrica, focados no aprendizado da linguagem C/C++.

<div align="center">
<img width="500" src="https://github.com/henriqueotogami/project-sirios/blob/main/resources/images/rounded-header-otogami.png?raw=true">
</div>
<br>
<div align="center">
<img src="https://img.shields.io/github/release-date/henriqueotogami/learning-c-language">
</div>
<br>
<div align="center">
<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/henriqueotogami/learning-c-language">
<img src="https://img.shields.io/github/checks-status/henriqueotogami/learning-c-language/main">
<img src="https://img.shields.io/github/issues/henriqueotogami/learning-c-language">
</div>
<br>
<div align="center">
<img src="https://img.shields.io/github/forks/henriqueotogami/learning-c-language?style=flat">
<img src="https://img.shields.io/github/stars/henriqueotogami/learning-c-language?style=flat">
<img src="https://img.shields.io/github/license/henriqueotogami/learning-c-language">
</div>
<div align="center">
<br>
<a href="https://wakatime.com/badge/user/1e53636e-c916-4d50-9ce1-f3ac75a883e3/project/10ed65c0-5c05-4e54-9af3-3c63c458cb02"><img src="https://wakatime.com/badge/user/1e53636e-c916-4d50-9ce1-f3ac75a883e3/project/10ed65c0-5c05-4e54-9af3-3c63c458cb02.svg" alt="wakatime"></a>
</div>


## 📋 Sobre o Projeto

Este projeto contém uma coleção de programas em C e C++ desenvolvidos como parte do curso de Computação Aplicada do primeiro semestre. Os códigos incluem exercícios práticos, algoritmos de álgebra linear (como inversão de matrizes e resolução de sistemas lineares), e exemplos de programação básica.

## 📁 Estrutura do Projeto

### Arquivos de Aula
- **AULA1.c** - Primeiro exemplo de programa em C (cálculo simples)
- **pr3.c** - Programa de resolução de sistemas lineares usando inversão de matrizes

### Exercícios (Questões)
- **quest7.cpp** - Soma dos dois maiores valores entre três números
- **quest8.cpp** - Identificação de polígonos regulares e cálculo de perímetro/área
- **quest9.cpp** - Exercício da lista de algoritmos
- **quest10.cpp** - Exercício da lista de algoritmos

### Provas e Avaliações
- **prova3.cpp** - Resolução de sistemas lineares por inversão de matrizes (versão de prova)
- **q2prov3.cpp** - Segunda questão da prova 3
- **exe34.cpp** - Exercício adicional

## 📂 Estrutura do repositório

```
LICENSE
README.md
AULA1.c                    # exemplo básico de cálculo em C
pr3.c                      # resolução de sistemas lineares
quest7.cpp                 # exercício: soma dos dois maiores valores
quest8.cpp                 # exercício: identificação de polígonos
quest9.cpp                 # exercício da lista de algoritmos
quest10.cpp                # exercício da lista de algoritmos
prova3.cpp                 # prova: resolução de sistemas lineares
q2prov3.cpp                # questão 2 da prova 3
exe34.cpp                  # exercício adicional
```

## 🛠️ Tecnologias Utilizadas

- **C** - Linguagem de programação estruturada
- **C++** - Linguagem de programação orientada a objetos (arquivos .cpp)
- **Dev-C++** - Ambiente de desenvolvimento utilizado

## 📝 Funcionalidades Principais

### Resolução de Sistemas Lineares
Os programas `pr3.c` e `prova3.cpp` implementam algoritmos para:
- Calcular a matriz inversa de uma matriz quadrada
- Resolver sistemas de equações lineares usando o método da inversão de matrizes
- Processar entrada do usuário para ordem da matriz e valores

### Exercícios de Lógica
- Tomada de decisão (if/else)
- Manipulação de variáveis
- Estruturas de controle básicas
- Cálculos matemáticos simples

## 🚀 Como Compilar e Executar

### Compilação no Dev-C++
1. Abra o arquivo `.c` ou `.cpp` no Dev-C++
2. Compile usando `F9` ou o menu `Execute > Compile`
3. Execute usando `F10` ou `Execute > Run`

### Compilação via Terminal (Linux/Mac)

```bash
# Para arquivos .c
gcc nome_arquivo.c -o nome_executavel -lm

# Para arquivos .cpp
g++ nome_arquivo.cpp -o nome_executavel

# Executar
./nome_executavel
```

### Compilação via Terminal (Windows)

```cmd
# Para arquivos .c
gcc nome_arquivo.c -o nome_executavel.exe

# Para arquivos .cpp
g++ nome_arquivo.cpp -o nome_executavel.exe

# Executar
nome_executavel.exe
```

## 📚 Conteúdos Abordados

- ✅ Estruturas básicas de programação em C/C++
- ✅ Entrada e saída de dados (scanf, printf)
- ✅ Estruturas condicionais (if/else)
- ✅ Laços de repetição (for, while)
- ✅ Arrays e matrizes
- ✅ Algoritmos numéricos (inversão de matrizes, sistemas lineares)
- ✅ Operações matemáticas básicas

## ⚙️ Como funciona

### Resolução de Sistemas Lineares
Os programas `pr3.c` e `prova3.cpp` implementam o seguinte algoritmo:
1. O usuário informa a ordem da matriz e seus elementos
2. O programa cria uma matriz expandida (matriz original + matriz identidade)
3. Aplica o método de eliminação de Gauss-Jordan para encontrar a matriz inversa
4. Multiplica a matriz inversa pelo vetor de constantes para resolver o sistema
5. Exibe a matriz inversa e a solução do sistema

### Exercícios de Lógica
- **quest7.cpp**: Lê três valores, identifica os dois maiores e calcula sua soma usando estruturas condicionais
- **quest8.cpp**: Identifica polígonos regulares (triângulo, quadrado, pentágono) e calcula perímetro ou área conforme o caso
- Outros exercícios seguem padrões similares de entrada, processamento e saída de dados

## 📄 Licença

Este projeto está licenciado sob a MIT License - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## 📖 Referências

- Código-fonte dos programas em `*.c` e `*.cpp` — exemplos práticos de programação em C/C++
- Estrutura e organização disponível neste repositório

---

### Hashtags
#CLanguage #Programming #CPlusPlus #LearningToCode #Engineering #Algorithm #MatrixInversion #LinearAlgebra #ComputerScience #OpenSource #GitHub #CodeExamples #BeginnerProgramming #ElectricalEngineering

### Meta Keywords
```
linguagem C, C++, programação, algoritmos, matriz inversa, sistemas lineares, 
engenharia elétrica, computação aplicada, Dev-C++, exercícios C, tutoriais C,
aprender programação, código exemplo, arrays, loops, estruturas de dados,
algoritmos numéricos, programação estruturada, primeiro semestre, código aberto
```
