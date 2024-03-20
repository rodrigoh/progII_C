#include<stdio.h>

int main(){
  int n;
  printf("Digite um numero: ");
  scanf("%d",&n);
  if (n > 0) {
    printf("O numero e %d ",n);
    printf("que e um numero positivo");
  }
  return 0;
}