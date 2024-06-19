#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef struct {
  char nome[50];
  int idade;
  char genero;
} Pessoa;

//tipo de retorno nome(paramentros)
Pessoa leDadosPessoa(){
  Pessoa p;
  printf("Digite o nome: ");
  scanf("%s",p.nome);
  setbuf(stdin,NULL);
  printf("Qual a idade do %s: ",p.nome);
  scanf("%d",&p.idade);
  setbuf(stdin,NULL);
  printf("Selecione o gênero M ou F: ");
  scanf("%c",&p.genero);
  return p;
}
void mostraPessoa(Pessoa p){
  printf("Nome: %s\n",p.nome);
  printf("Idade: %d\n",p.idade);
  printf("Gênero: %c\n",p.genero);
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  Pessoa lista[3];
  for(int i=0;i<3;i++){
    lista[i] = leDadosPessoa();
  }
  printf("Dados das pessoas\n");
  for(int i=0;i<3;i++){
    mostraPessoa(lista[i]);
  }
  return 0;
}