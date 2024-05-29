/*
Carregar uma matriz SOMA 4x4, calcular e escrever as seguintes somas: 
a) da linha de índice 3 
b) da coluna de índice 2 
c) de todos os elementos da matriz  
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  srand(time(NULL));
  int matriz[4][4];
  int somaLinhaI3 = 0;
  int somaColunaI2 = 0;
  int somaTotal = 0;
  for(int l=0;l<4;l++){
    for(int c=0;c<4;c++){
      matriz[l][c]=rand()%100;
      printf("%02d ",matriz[l][c]);
      if(l==3)
        somaLinhaI3+=matriz[l][c];
      if(c==2)
        somaColunaI2+=matriz[l][c];
      somaTotal+=matriz[l][c];
    }
    printf("\n");
  }
  printf("A soma dos elementos na linha de índice 3 vale %d\n",somaLinhaI3);
  printf("A soma dos elementos na coluna de índice 2 vale %d\n",somaColunaI2);
  printf("A soma de todos os elementos da matriz vale %d\n",somaTotal);
  return 0;
}