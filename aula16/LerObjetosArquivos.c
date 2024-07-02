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
  arquivo = fopen("pessoas.db","r");
  if(arquivo!=NULL){
    //Criando um objeto para ler as informações do arquivo
    Pessoa p1;
    //Ler o objeto do arquivo
    fread(&p1,sizeof(Pessoa),1,arquivo);
    printf("Nome: %s %s\n",p1.nome, p1.sobrenome);
    printf("Altura: %d cm\n",p1.altura);
    //Fechando o arquivo
    fclose(arquivo);
  }
  else{
    printf("Erro ao abrir ou criar o arquivo!");
  }
  return 0;
}

