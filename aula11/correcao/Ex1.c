/*
Ler 6 números inteiros para preencher uma matriz D 2x3, ou seja, com 2 linhas e 3 colunas (considere que não serão informados valores duplicados). 
A seguir, ler um número inteiro X e escrever uma mensagem indicando se o valor de X existe ou não na matriz D. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int matriz[2][3];
  int vx;
  int controle = 0;
  for(int l=0;l<2;l++){
    for(int c=0;c<3;c++){
      printf("Digite um valor para matriz[%d][%d]: ",l,c);
      scanf("%d", &matriz[l][c]);
    }
  }
  printf("Digite um valor para pesquisar na matriz: ");
  scanf("%d",&vx);
  for(int l=0;l<2;l++){
    for(int c=0;c<3;c++){
      if(matriz[l][c]==vx){
        controle = 1;
      }
    }
  }
  if(controle == 1){
    printf("O valor %d existe na matriz\n",vx);
  }
  else{
    printf("O valor %d não existe na matriz\n",vx);
  }
  return 0;
}