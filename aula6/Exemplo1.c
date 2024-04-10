#include<stdio.h>

int main(){
  //Vetor de 10 numeros inteiros com indices de 0 a 9
  int vetor[10];
  //Lendo dados para o vetor
  for(int i=0;i<10;i++){
    printf("Entre com um valor para vetor[%d]: ",i);
    scanf("%d",&vetor[i]);
  }
  //Mostrando os dados do vetor
  for(int i=0;i<10;i++){
    printf("%d ",vetor[i]);
  }
  return 0;
}