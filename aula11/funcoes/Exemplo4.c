#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int vetor[20];

int somaVetor(){
  int tamanho = sizeof(vetor)/sizeof(int);
  int soma = 0;
  for(int i=0;i<tamanho;i++)
    soma+=vetor[i];
  return soma;
}

void imprimeVetor(){
  int tamanho = sizeof(vetor)/sizeof(int);
  printf("Dados no vetor\n");
  for(int i=0;i<tamanho;i++)
    printf("%d ",vetor[i]);
  printf("\n");
}

void geraVetor(){
  int tamanho = sizeof(vetor)/sizeof(int);
  for(int i=0;i<tamanho;i++)
    vetor[i] = rand()%tamanho*2;
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