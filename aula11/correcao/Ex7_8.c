/*
7 - Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão na diagonal principal.

8 - Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));

  int matriz[5][5];
  int somaAcima = 0;
  int somaAbaixo = 0;
  int somaD = 0;

  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      matriz[l][c]=rand()%50;
      if(l==c)
        somaD+=matriz[l][c];
      else if(l<c)
        somaAcima+=matriz[l][c];
      else
        somaAbaixo+=matriz[l][c];
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
  printf("A soma dos elementos acima da diagonal vale %d\n",somaAcima);
  printf("A soma dos elementos ba diagonal vale %d\n",somaD);
  printf("A soma dos elementos abaixo da diagonal vale %d\n",somaAbaixo);
  return 0;
}