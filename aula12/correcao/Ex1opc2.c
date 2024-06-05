#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//função retorna 1 para positivo e 0 para o número zero e 2 para negativo
int ePositivo(int num){
  int retorno = 0;
  if(num>0)
    retorno = 1;
  else if(num<0)
    retorno = 2;
  return retorno;  
}

int ePositivo(int num){
  if(num>0)
    return 1;
  else if(num<0)
    return 2;
  return 0;  
}

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  printf("Digite um número: ");
  int valor;
  scanf("%d",&valor);
  int retorno = ePositivo(valor);
  if(retorno==0)
    printf("%d é zero");
  else if(retorno==1)
    printf("%d é positivo");
  else
    printf("%d é negativo");

  return 0;
}