#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef struct Pessoa {
  char nome[50];
  int altura;
  //Para realizar o encadeamento...
  struct Pessoa *proximo;
} Pessoa;

Pessoa* cadastraPessoa(){
  Pessoa *p = NULL;
  p = (Pessoa*) calloc(sizeof(Pessoa),1);
  p->proximo = NULL;
  printf("Nome: ");
  //O acesso aos elementos da struct é realizado pelo -> e não .
  //fgets(para onde ler. o tamanho, de onde ler)
  setbuf(stdin,NULL);
  gets(p->nome);
  printf("Qual a altura de %s em cm: ",p->nome);
  setbuf(stdin,NULL);
  scanf("%d",&(p->altura));
  return p;
}

void listaPessoas(Pessoa *inicio) {
  Pessoa *registro = inicio;
  while (registro != NULL) {
    printf("Nome: %s\n", registro->nome);
    printf("Altura: %d\n", registro->altura);
    printf("------------------------\n");
    registro = registro->proximo;
  }
}

void liberaLista(Pessoa *inicio) {
  Pessoa *registro = inicio;
  while (registro != NULL) {
    Pessoa *liberar = registro;
    registro = registro->proximo;
    free(liberar);
  }
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Necessário inicializar para ter certeza que não existe nada...
  Pessoa *inicio = NULL;
  char opc;
  do{
    printf("Selecione uma opção \n");
    printf("c - cadastrar pessoa\n");
    printf("l - listar pessoas\n");
    printf("s - sair\n>");
    setbuf(stdin,NULL);
    scanf("%c",&opc);
    if(opc=='c'){
      Pessoa *novo = cadastraPessoa();
      novo->proximo = inicio;
      inicio = novo;
    }
    else if(opc=='l'){
      listaPessoas(inicio);
    }
  }
  while(opc!='s');
  printf("Liberando a memória... ");
  liberaLista(inicio);
  printf("[Ok]\n");
}
