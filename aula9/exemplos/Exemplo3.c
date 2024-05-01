#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char letras[5][5];
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      setbuf(stdin,NULL);
      printf("Digite uma letra para letras[%d][%d]: ",l,c);
      scanf("%c",&letras[l][c]);
    }
  }
  printf("Dados na matriz de letras\n");
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      printf("%c",letras[l][c]);
    }
    printf("\n");
  }

  return 0;
}