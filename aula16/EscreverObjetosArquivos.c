#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//Definindo o novo tipo para o objeto que será escrito no arquivo
typedef struct{
  char nome[50];
  char sobrenome[50];
  int altura;
} Pessoa;
int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Declarando o ponteiro para o arquivo
  FILE *arquivo;
  //Abrindo o arquivo
  arquivo = fopen("pessoas.db","a");
  if(arquivo!=NULL){
    //Criando um objeto para escrever no arquivo
    Pessoa p1 = {"Jonas","Silva", 180};
    //Escrever o objeto no arquivo
    fwrite(&p1,sizeof(Pessoa),1,arquivo);
    //Fechando o arquivo
    fclose(arquivo);
    printf("Dados gravados com sucesso!");
  }
  else{
    printf("Erro ao abrir ou criar o arquivo!");
  }
  return 0;
}

