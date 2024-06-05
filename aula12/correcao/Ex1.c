#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


void ePositivo(int num){
  if(num>0)
    printf("%d é positivo!\n",num);
  else
    printf("%d não é positivo!\n",num);
}

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  printf("Digite um número: ");
  int valor;
  scanf("%d",&valor);
  ePositivo(valor);
  return 0;
}