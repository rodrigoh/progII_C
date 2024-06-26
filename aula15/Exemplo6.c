#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void incrementa(int *valor){
  *valor+=100;
}

int main(){
  SetConsoleOutputCP(65001);
  int numero;
  printf("Digite um número: ");
  scanf("%d",&numero);
  incrementa(&numero);
  printf("O valor agora é %d\n",numero);
  return 0;
}