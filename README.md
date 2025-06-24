# 📒 Sistema de Cadastro Telefônico em C

Este projeto é uma aplicação de linha de comando desenvolvida em linguagem C, com foco em operações básicas de uma **agenda telefônica digital**. Ele permite **cadastrar**, **buscar** e **listar contatos**, sendo ideal para fins didáticos, estudo de estruturas em C e manipulação de dados em memória.

---

## ✨ Destaques do Projeto

✅ Estrutura modular com funções bem definidas  
✅ Uso de `struct` para modelagem de dados  
✅ Menu interativo com tratamento de opções inválidas  
✅ Códigos comentados e organizados  
✅ Base sólida para evoluções como persistência em arquivo e uso dinâmico de memória

---

## 🔧 Tecnologias Utilizadas

- Linguagem: **C**
- Bibliotecas: `stdio.h`, `string.h`
- Ambiente: Qualquer compilador C compatível (ex: GCC)

---

## 🎯 Funcionalidades

| Função                  | Descrição                                                                 |
|-------------------------|---------------------------------------------------------------------------|
| 📥 **Cadastrar Contato** | Permite inserir nome, telefone, e-mail e data de nascimento               |
| 🔎 **Buscar Contato**    | Pesquisa um contato existente pelo nome e exibe os dados completos        |
| 📋 **Imprimir Agenda**   | Lista todos os contatos armazenados na sessão atual                      |
| ❌ **Sair**              | Encerra o programa de forma segura                                        |

---

## 🚀 Como Executar

1. **Clone ou baixe este repositório**:
   ```bash
   git clone https://github.com/seu-usuario/nome-do-repositorio.git
   cd nome-do-repositorio
2. **Compile o programa**:
   ```bash
   gcc cadastro_telefonico.c -o agenda
3. **Execute a aplicação**:
   ```bash
   ./agenda
---

## 🧠 Estrutura do Código

O sistema é baseado em uma estrutura chamada `Contato`, que armazena os dados de cada pessoa. As operações principais são separadas em funções, conforme exemplo abaixo:

```c
// Estrutura do contato
struct Contato {
    char nome[50];
    char telefone[15];
    char email[100];
    char data_nascimento[15];
};

// Protótipos das funções principais
void cadastrarContato(struct Contato agenda[], int *totalContatos);
void buscarContato(struct Contato agenda[], int totalContatos);
void imprimirAgenda(struct Contato agenda[], int totalContatos);
---
```
## 📌 Limitações Atuais

- A agenda está limitada a **2 contatos** (`struct Contato agenda[2];`), o que pode ser ajustado facilmente para uma capacidade maior.
- Os contatos são armazenados apenas **em memória RAM**, ou seja, ao encerrar o programa os dados são perdidos.
- A entrada de dados com `scanf` não permite nomes, e-mails ou outros campos com espaços. Nomes compostos, por exemplo, são truncados.
- Não há **validação de formatos** para telefone, e-mail ou data de nascimento.
- O programa não possui recursos de **edição ou exclusão** de contatos.

---

## 💡 Próximos Passos (Sugestões de Evolução)

- [ ] Utilizar `fgets()` para aceitar entradas com espaços
- [ ] Adicionar validação de dados (ex: formato de e-mail, número de telefone)
- [ ] Permitir **edição** e **remoção** de contatos
- [ ] Salvar e carregar os dados utilizando arquivos (`.txt`, `.bin`, `.csv`)
- [ ] Implementar **alocação dinâmica** de memória para suportar qualquer número de contatos
- [ ] Criar uma interface mais amigável com bibliotecas como `ncurses` (modo texto) ou `GTK` (interface gráfica)
- [ ] Internacionalização (i18n) e suporte a diferentes idiomas

