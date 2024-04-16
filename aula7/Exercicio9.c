/*
Declare três vetores com até 100 números, o primeiro deve 
receber números aleatórios, o segundo deve receber os 
números pares do primeiro vetor e o segundo os números 
ímpares do primeiro vetor. Ao final mostrar os três 
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