#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int matriz[10][10];
  srand(time(NULL));
  printf("Matriz com 100 números aleatórios...\n");
  for(int l=0;l<10;l++){
    for(int c=0;c<10;c++){
      matriz[l][c] = rand()%200;
      printf("%03d ",matriz[l][c]);
    }
    printf("\n");
  }
  printf("Valores na diagonal da matriz:\n");
  for(int l=0;l<10;l++){
    for(int c=0;c<10;c++){
      if(l==c){
        printf("%d ",matriz[l][c]);
      }
    }
  }
  printf("\nValores na diagonal da matriz:\n");
  for(int i=0;i<10;i++){
    printf("%d ",matriz[i][i]);
  }
  printf("\nValores na diagonal secundária da matriz:\n");
  for(int l=0;l<10;l++){
    for(int c=0;c<10;c++){
      if(l+c==9){
        printf("%d ",matriz[l][c]);
      }
    }
  }
  return 0;
}