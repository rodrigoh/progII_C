#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int achaMaior(int n1, int n2){
  if(n1>n2)
    return n1;
  else
    return n2;
}

int main(){
  SetConsoleOutputCP(65001);
  int v1, v2;
  system("cls");
  printf("Digite um número: ");
  scanf("%d",&v1);
  printf("Digite um número: ");
  scanf("%d",&v2);
  int maior = achaMaior(v1,v2);
  printf("O maior entre os dois números digitados é %d\n",maior);
  return 0;
}