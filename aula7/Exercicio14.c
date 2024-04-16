/*
Declare um vetor de 10 elementos, gere n�meros aleat�rios para ele. 
Em seguida mostre o vetor na tela e pergunte ao usu�rio qual n�mero ele pretende remover do vetor. Em seguida, remova esse n�mero do vetor e 
mostre ele novamente na tela.
vetor
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int vetor[10];
  int tamanho = 10;
  //Para busca
  int posicao = -1;
  //Elemento que ser� removido
  int remove;
  for(int i=0;i<tamanho;i++){
    vetor[i] = rand()%30;
    printf("%d ",vetor[i]);
  }
  printf("\nDos numeros acima, qual devo remover: ");
  scanf("%d",&remove);
  //Procurando o elemento na lista
  for(int i=0;i<tamanho;i++){
    if(vetor[i]==remove){
      posicao = i;
    }
  }
  if(posicao>=0){
    //Remover o n�mero
    for(int i=posicao;i<tamanho-1;i++){
      vetor[i] = vetor[i+1];
    }
    tamanho--;
    printf("\nSobraram no vetor\n");
    for(int i=0;i<tamanho;i++){
      printf("%d ",vetor[i]);
    }
  }
  else{
    printf("\nO valor %d, nao esta na lista.\n",remove);
  }
 }