/*
 Faça um programa que deverá permitir que o usuário entre com os valores dos elementos de uma matriz quadrada de ordem 4 e 
 possibilite o usuário realizar as seguintes funcionalidades: 
a) Imprimir todos os elementos da matriz; 
b) Somar os quadrados de todos os elementos da primeira coluna; 
c) Somar todos os elementos da terceira linha; 
d) Somar os elementos da diagonal principal; e 
e) Somar todos os elementos de índice par da segunda linha. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));

  int matriz[4][4];
  for(int l=0;l<4;l++){
    for(int c=0;c<4;c++){
      matriz[l][c] = rand()%30;
    }
  }
  int resp;
  do{
    printf("Selecione uma opção\n");
    printf("1 - imprimir os elementos da matriz\n");
    printf("2 - Somar os quadrados de todos os elementos da primeira coluna\n");
    printf("3 - Somar todos os elementos da terceira linha\n");
    printf("4 - Somar os elementos da diagonal principal\n");
    printf("5 - Somar todos os elementos de índice par da segunda linha\n");
    printf("0 - sair");
    scanf("%d",&resp);
    if(resp==1){
      for(int l=0;l<4;l++){
        for(int c=0;c<4;c++){
          printf("%02d ",matriz[l][c]);
        }
        printf("\n");
      }
    }
    else if(resp==2){
      int soma=0;
      //Somar os quadrados de todos os elementos da primeira coluna 0
      for(int i=0;i<4;i++){
        soma+=matriz[i][0]*matriz[i][0];
      }
      printf("A soma dos elementos na primeira coluna (i=0) da matriz vale %d\n",soma);
    }
    else if(resp==3){
       int soma=0;
      //Somar todos os elementos da terceira linha
      for(int i=0;i<4;i++){
        soma+=matriz[2][i];
      }
      printf("A soma dos elementos na terceira linha (i=2) da matriz vale %d\n",soma);
    }
    else if(resp==4){
       int soma=0;
      //Somar os elementos da diagonal
      for(int i=0;i<4;i++){
        soma+=matriz[i][i];
      }
      printf("A soma dos elementos na diagonal da matriz vale %d\n",soma);
    }
    else if(resp==5){
      int soma=0;
      //Somar todos os elementos de índice par da segunda linha 0 1 2 3 
      soma = matriz[1][0]+matriz[1][2];
      printf("A soma dos elementos de índice par da segunda linha %d\n",soma);
    }
  }
  while(resp!=0);
  return 0;
}