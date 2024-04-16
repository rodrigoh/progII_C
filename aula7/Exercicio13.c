/*
Ler dois vetores: R de 5 elementos e S de 10 elementos. 
Gerar um vetor X de 15 elementos cujas 5 primeiras posições 
contenham os elementos de R e as 10 últimas posições, os 
elementos de S. Escrever o vetor X. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int vr[5];
  int vs[10];
  int vx[15];
  srand(time(NULL));
  printf("\nDados no vetor r\n");
  for(int i=0;i<5;i++){
    vr[i] = rand()%10;
    printf("%d ",vr[i]);
  }
  printf("\nDados no vetor s\n");
  for(int i=0;i<10;i++){
    vs[i] = rand()%20;
    printf("%d ",vs[i]);
  }
  printf("\nDados no vetor x\n");
  for(int i=0;i<15;i++){
    if(i<5){
      vx[i] = vr[i];
    }
    else{
      vx[i] = vs[i-5];
    }
    printf("%d ",vx[i]);
  }
  return 0;
}