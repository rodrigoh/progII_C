#include<stdio.h>

int main(){
  int numero[] = {1,2,3,4,5,6,7,8,9,10};
  char nome[3] = {'A','n','a'};
  printf("Vetor de numeros:\n");
  for(int i=0;i<10;i++){
    printf("%d ",numero[i]);

  }
  printf("\nVetor de letras\n");
  for(int i=0;i<3;i++){
    printf("%c",nome[i]);
  }
  return 0;
}