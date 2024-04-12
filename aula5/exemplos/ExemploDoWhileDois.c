#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int nota;
  do{
    printf("Digite um nota entre 1 e 10: ");
    scanf("%d",&nota);
  }
  while(nota<1 || nota>10);
  return 0;
}