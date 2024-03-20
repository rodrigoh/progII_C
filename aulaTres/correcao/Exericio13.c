#include<stdio.h>

int main(){
  printf("Entre com o valor para A: ");
  int a;
  scanf("%d",&a);
  printf("Entre com o valor para B: ");
  int b;
  scanf("%d",&b);
  int c = a;
  a = b;
  b = c;
  printf("Os valores trocados sao A = %d e B = %d\n",a,b);
  return 0;
}