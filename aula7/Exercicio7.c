/*Crie um programa que lê 6 valores inteiros e, em seguida, 
mostre na tela os valores lidos na ordem inversa.*/
#include<stdio.h>

int main(){
  //vetor de 6 elementos com indices de 0 a 5
  int vetor[6];
  for(int i=0;i<6;i++){
    printf("Digite um valor para vetor[%d]: ",i);
    scanf("%d",&vetor[i]);
  }
  printf("Vetor inverso\n");
  for(int i=5;i>=0;i--){
    printf("%d ",vetor[i]);
  }

}