/*
Faça um programa para gerar automaticamente números entre 1 e 99 de uma cartela de bingo. Sabendo que cada cartela 
deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. 
O programa deve exibir na tela a cartela gerada.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int cartela[5][5];
  int vetor[25];
  int iv = 0;

  for(int l=0;l<5;l++){
    for(int c=0;c<5;){
      int num = rand()%99;
      num+=1;
      //Buscando no vetor
      int achei = 0;
      for(int i=0;i<iv;i++){
        if(vetor[i]==num)
        achei = 1;
      }
      //Se o número não estiver no vetor, ele vai para matriz
      if(achei==0){
        cartela[l][c] = num;
        vetor[iv++] = num;
        printf("%02d ",cartela[l][c]);
        c++;
      }
    }
    printf("\n");
  }
  return 0;
}