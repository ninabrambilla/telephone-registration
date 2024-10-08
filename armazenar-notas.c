#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  char nome[20];
  char nota[20];
  int i;

  // criando a variável ponteiro para o arquivo
  FILE *pont_arq;

  //abrindo o arquivo
  pont_arq = fopen("arquivo.txt", "w+");
  
  for(i = 0; i < 5; i++){
    printf("\nEstudante número %d:", i+1);
    printf("\nEntre com o nome: ");
    scanf("%s", nome);
    printf("Entre com a nota: ");
    scanf("%s", nota);

    //escrevendo no arquivo
    fputs("Nome: ", pont_arq);
    fputs(nome, pont_arq);
    fputs(", Nota: ", pont_arq);
    fputs(nota, pont_arq);
    fputs("\n", pont_arq);
  }
  
  // fechando arquivo
  fclose(pont_arq);

  //mensagem para o usuário
  printf("\nArquivo Gerado!");

  system("pause");
}
