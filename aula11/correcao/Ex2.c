/*
Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int matriz[5][5];
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      if(l==c)
        matriz[l][c]=1;
      else
        matriz[l][c]=0;
      printf("%d ",matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}