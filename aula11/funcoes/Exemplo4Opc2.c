#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int vetor[20];

int somaVetor(){
  int soma = 0;
  for(int i=0;i<20;i++)
    soma+=vetor[i];
  return soma;
}

void imprimeVetor(){
  printf("Dados no vetor\n");
  for(int i=0;i<20;i++)
    printf("%d ",vetor[i]);
  printf("\n");
}

void geraVetor(){
  for(int i=0;i<20;i++)
    vetor[i] = rand()%40;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  geraVetor();
  imprimeVetor();
  int soma = somaVetor();
  printf("A soma dos elementos no vetor vale %d\n",soma);
  return 0;
}