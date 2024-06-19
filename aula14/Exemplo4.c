#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef struct {
  char nome[50];
  int idade;
  char genero;
} Pessoa;

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  Pessoa lista[3];
  for(int i=0;i<3;i++){
    printf("Digite o nome da pessoa: ");
    setbuf(stdin,NULL);
    scanf("%s",lista[i].nome);
    printf("Qual a idade do %s: ",lista[i].nome);
    setbuf(stdin,NULL);
    scanf("%d",&lista[i].idade);
    printf("Selecione o gênero M ou F:");
    setbuf(stdin,NULL);
    scanf("%c",&lista[i].genero);
  }
  printf("Dados das pessoas\n");
  for(int i=0;i<3;i++){
    printf("Nome: %s\n",lista[i].nome);
    printf("Idade: %d\n",lista[i].idade);
    printf("Gênero: %c\n",lista[i].genero);
  }
  return 0;
}