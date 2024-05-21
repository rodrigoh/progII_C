#include<stdio.h>
#include<stdlib.h>

int main(){
  system("cls");
  //tipo nome[linhas][colunas]
  int matriz[2][4];
  //matriz[0][1] = 10;
  for(int l=0;l<2;l++){
    for(int c=0;c<4;c++){
      printf("Digite um valor para matriz[%d][%d]: ",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }
  for(int l=0;l<2;l++){
    for(int c=0;c<4;c++){
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}