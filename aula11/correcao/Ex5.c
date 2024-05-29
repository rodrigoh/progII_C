/*
Ler uma matriz 4x4 de números inteiros, multiplicar os elementos da diagonal principal por um número inteiro 
também lido e escrever a matriz resultante. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int matriz[4][4];
  int valor;
  for(int l=0;l<4;l++){
    for(int c=0;c<4;c++){
      printf("Digite um valor para matriz[%d][%d]: ",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }
  //A multiplicação pode ser realizada com um for apenas
  // for(int i=0;i<4;i++)
  //   matriz[i][i]*=valor;
  printf("Digite um valor para multiplicar pela diagonal: ");
  scanf("%d",&valor);
  for(int l=0;l<4;l++){
    for(int c=0;c<4;c++){
      if(l==c)
        matriz[l][c]*=valor;
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}