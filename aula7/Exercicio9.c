/*
Declare tr�s vetores com at� 100 n�meros, o primeiro deve 
receber n�meros aleat�rios, o segundo deve receber os 
n�meros pares do primeiro vetor e o segundo os n�meros 
�mpares do primeiro vetor. Ao final mostrar os tr�s 
vetores
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int vetor[100];
  int par[100];
  int impar[100];
  int cp = 0;
  int ci = 0;
  printf("Dados no vetor...\n");
  for(int i=0;i<100;i++){
    vetor[i] = rand()%200;
    printf("%d ",vetor[i]);
    if(vetor[i]%2==0){
      par[cp] = vetor[i];
      cp++;
    }
    else{
      impar[ci] = vetor[i];
      ci++;
    }
  }
  printf("\nDos numeros em vetor, sao pares\n");
  for(int i=0;i<cp;i++){
    printf("%d ",par[i]);
  }
  printf("\nDos numeros em vetor, sao impares\n");
  for(int i=0;i<ci;i++){
    printf("%d ",impar[i]);
  }
  return 0;
}