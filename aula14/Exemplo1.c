#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
struct pessoa{
  char nome[50];
  int idade;
  char genero;
};


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  struct pessoa pessoaUm;
  //Declarando e inicializando uma instância de pessoa
  struct pessoa pessoaDois = {"Jonas Santos", 25, 'M'};

  printf("Nome: %s\n",pessoaDois.nome);
  printf("Idade: %d\n",pessoaDois.idade);
  printf("Gênero: %c\n",pessoaDois.genero);

  printf("Digite o nome: ");
  scanf("%s",pessoaUm.nome);
  setbuf(stdin,NULL);
  printf("Digite a idade do %s: ",pessoaUm.nome);
  //Lendo a idade para o atributo idade da pessoa
  scanf("%d",&pessoaUm.idade);
  setbuf(stdin,NULL);
  printf("Selecione M ou F: ");
  scanf("%c",&pessoaUm.genero);
  printf("----Dados da pessoa----");
  printf("\nNome: %s\n",pessoaUm.nome);
  printf("Idade: %d\n",pessoaUm.idade);
  printf("Gênero: %c\n",pessoaUm.genero);
  return 0;
}