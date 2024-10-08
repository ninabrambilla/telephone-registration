#include <stdio.h>
#include <string.h>

// Definir a estrutura para armazenar informações de contato
struct Contato {
    char nome[50];
    char telefone[15];
    char email[100];
    char data_nascimento[15];
};

// Protótipos de funções
void cadastrarContato(struct Contato agenda[], int *totalContatos);
void buscarContato(struct Contato agenda[], int totalContatos);
void imprimirAgenda(struct Contato agenda[], int totalContatos);

int main() {
    struct Contato agenda[2]; 
    int totalContatos = 0;
    int opcao;

    do {
        printf("\n----- Menu -----\n");
        printf("1. Cadastrar Contato\n");
        printf("2. Buscar Contato\n");
        printf("3. Imprimir Agenda\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarContato(agenda, &totalContatos);
                break;
            case 2:
                buscarContato(agenda, totalContatos);
                break;
            case 3:
                imprimirAgenda(agenda, totalContatos);
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

void cadastrarContato(struct Contato agenda[], int *totalContatos) {
    if (*totalContatos < 100) {
        printf("Digite o nome: ");
        scanf("%s", agenda[*totalContatos].nome);
        printf("Digite o telefone: ");
        scanf("%s", agenda[*totalContatos].telefone);
        printf("Digite o e-mail: ");
        scanf("%s", agenda[*totalContatos].email);
        printf("Digite a data de nascimento: ");
        scanf("%s", agenda[*totalContatos].data_nascimento);

        (*totalContatos)++;
        printf("Contato cadastrado com sucesso!\n");
    } else {
        printf("A agenda está cheia. Não é possível cadastrar mais contatos.\n");
    }
}

void buscarContato(struct Contato agenda[], int totalContatos) {
    char nomeBusca[50];
    printf("Digite o nome do contato a ser buscado: ");
    scanf("%s", nomeBusca);

    int encontrado = 0;

    for (int i = 0; i < totalContatos; i++) {
        if (strcmp(nomeBusca, agenda[i].nome) == 0) {
            printf("Contato encontrado:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("E-mail: %s\n", agenda[i].email);
            printf("Data de Nascimento: %s\n", agenda[i].data_nascimento);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado na agenda.\n");
    }
}

void imprimirAgenda(struct Contato agenda[], int totalContatos) {
    if (totalContatos > 0) {
        printf("Agenda de Contatos:\n");
        for (int i = 0; i < totalContatos; i++) {
            printf("Contato %d:\n", i + 1);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("E-mail: %s\n", agenda[i].email);
            printf("Data de Nascimento: %s\n", agenda[i].data_nascimento);
        }
    } else {
        printf("A agenda está vazia.\n");
    }
}
