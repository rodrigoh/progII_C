#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Declarar uma matriz
  //tipo nome[linhas][colunas]
  int matriz[3][4];
  matriz[0][0] = 10;
  matriz[0][1] = 25;
  //...
  for(int l=0;l<3;l++){
    for(int c=0;c<4;c++){
      printf("Digite uma valor para matriz[%d][%d]: ",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }
  printf("Dados na matriz\n");
  //For responsável por iterar as linhas da matriz
  for(int l=0;l<3;l++){
    //For responsável por iterar as colunas da matriz
    for(int c=0;c<4;c++){
      //%02d = todos os números devem ocupar dois dígitos 
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
}