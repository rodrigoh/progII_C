/*
 Dada uma matriz B, determine a linha de B que possui a maior soma de seus elementos. 
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
  int somaMaxima;
  int linha;
  for(int l=0;l<5;l++){
    int soma=0;
    for(int c=0;c<5;c++){
      matriz[l][c]=rand()%30;
      soma+=matriz[l][c];
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
    //Encontrando a linha com maior soma
    if(l==0){
      somaMaxima = soma;
      linha = 0;
    }
    else if(soma>somaMaxima){
      somaMaxima = soma;
      linha = l;
    } 
  }
  printf("A linha com maior soma é %d cuja soma vale %d\n",linha,somaMaxima);
  return 0;
}