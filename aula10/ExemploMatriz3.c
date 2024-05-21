#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int matriz[10][10];

  for(int l=0;l<10;l++){
    for(int c=0;c<10;c++){
      matriz[l][c] = rand()%200;
      printf("%03d ",matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}