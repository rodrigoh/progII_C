#include<stdio.h>
/*Escreva um programa para ler um valor entre 1 (inclusive) e 10 (inclusive). Se o valor lido não estiver 
entre 1 (inclusive) e 10 (inclusive), deve ser lido um novo valor. Após a leitura do valor, escrever o valor 
lido na tela.*/
int main(){
  int valor;
  do{
    printf("Digite um valor entre 1 e 10: ");
    scanf("%d",&valor);
    if(valor<1 || valor>10)
      printf("Valor invalido\n");
  }
  while(valor<1 || valor>10);
  printf("O valor lido foi %d\n",valor);
  return 0;
}