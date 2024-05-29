#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int n1;
int n2;
int resp;

void soma(){
  resp = n1+n2;
}

void limpaTela(){
  system("cls");
}

int main(){
  SetConsoleOutputCP(65001);
  limpaTela();
  printf("Digite um valor para n1: ");
  scanf("%d",&n1);
  printf("Digite um valor para n2: ");
  scanf("%d",&n2);
  soma();
  printf("%d + %d = %d\n",n1,n2,resp);
  return 0;
}


