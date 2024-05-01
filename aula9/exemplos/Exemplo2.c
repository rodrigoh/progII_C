#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int matriz[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
  for(int l=0;l<3;l++){
    for(int c=0;c<5;c++){
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}